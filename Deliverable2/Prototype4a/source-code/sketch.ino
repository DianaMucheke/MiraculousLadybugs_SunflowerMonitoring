#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <DHT.h>

// OLED settings
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// DHT22 settings
#define DHTPIN 15
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// MQ-5 Analog Pin
#define MQ5_PIN 34

void setup() {
  Serial.begin(115200);

  dht.begin();

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    while(true);
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);

  display.setCursor(10, 20);
  display.println("Sunflower Monitor");
  display.display();

  delay(2000);
}

void loop() {

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  int gasValue = analogRead(MQ5_PIN);

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Gas Level: ");
  Serial.println(gasValue);

  display.clearDisplay();

  display.setCursor(0,0);
  display.print("Temp:");
  display.print(temperature);
  display.println(" C");

  display.setCursor(0,12);
  display.print("Hum:");
  display.print(humidity);
  display.println("%");

  display.setCursor(0,24);
  display.print("Gas:");
  display.println(gasValue);

  // Temperature Status
  display.setCursor(0,40);

  if (temperature >= 21 && temperature <= 26) {
    display.println("Temp: OPTIMAL");
  }
  else {
    display.println("Temp: CHECK");
  }

  // Humidity Status
  display.setCursor(0,52);

  if (humidity >= 40 && humidity <= 50) {
    display.println("Hum: OPTIMAL");
  }
  else {
    display.println("Hum: CHECK");
  }

  display.display();

  delay(2000);
}
