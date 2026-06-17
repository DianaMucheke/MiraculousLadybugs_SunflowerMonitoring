#include <DHT.h>

#define DHTPIN 15
#define DHTTYPE DHT22

#define RELAY_PIN 27
#define MQ5_PIN 34

DHT dht(DHTPIN, DHTTYPE);

float tempThreshold = 30.0;
float humidityThreshold = 70.0;

void setup() {
  Serial.begin(115200);

  dht.begin();

  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  Serial.println("=== Architecture (c) Simulation ===");
  Serial.println("DHT22 + Relay + MQ5");
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read DHT22");
    delay(2000);
    return;
  }

  int gasValue = analogRead(MQ5_PIN);

  Serial.println("--------------------------------");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  bool relayState =
      (temperature > tempThreshold ||
       humidity > humidityThreshold);

  if (relayState) {

    digitalWrite(RELAY_PIN, HIGH);

    Serial.println("Relay Status: ON");
    Serial.println("ESP32 #2 Activated");

    Serial.print("Gas Level: ");
    Serial.println(gasValue);

    if (gasValue > 2000) {
      Serial.println("WARNING: High LPG Detected!");
    } else {
      Serial.println("Gas Level Normal");
    }

  } else {

    digitalWrite(RELAY_PIN, LOW);

    Serial.println("Relay Status: OFF");
    Serial.println("ESP32 #2 Idle");
  }

  delay(2000);
}
