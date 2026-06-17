#include <Wire.h>
#include <U8g2lib.h>

#define MQ5_PIN       34
#define UART_RX_PIN   16
#define UART_TX_PIN   17
#define MQ5_READ_INTERVAL_MS 2000

// 1.3" 128x64 OLED — SH1106 controller (common for 1.3" IIC OLEDs)
U8G2_SH1106_128X64_NONAME_F_HW_I2C display(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);

float receivedTemp = -999;
float receivedHum  = -999;
String uartBuffer  = "";

void setup() {
  Serial.begin(115200);
  Serial2.begin(9600, SERIAL_8N1, UART_RX_PIN, UART_TX_PIN);

  display.begin();
  display.setFont(u8g2_font_6x10_tf);

  Serial.println("[ESP32 #2] MQ-5 Receiver + LCD ready.");

  // Splash screen
  display.clearBuffer();
  display.drawStr(10, 20, "ICS 4111 - IoT");
  display.drawStr(10, 36, "Architecture (b)");
  display.drawStr(10, 52, "Initialising...");
  display.sendBuffer();
  delay(2000);

  receivedTemp = 24.5;
  receivedHum  = 58.0;
}

// Parse "T:25.30,H:60.10" into temp and humidity floats
bool parsePayload(const String& line, float& temp, float& hum) {
  int tIdx = line.indexOf("T:");
  int hIdx = line.indexOf(",H:");
  if (tIdx == -1 || hIdx == -1) return false;

  temp = line.substring(tIdx + 2, hIdx).toFloat();
  hum  = line.substring(hIdx + 3).toFloat();
  return true;
}

void updateDisplay(int gasRaw, float gasV, float temp, float hum) {
  display.clearBuffer();

  // Title bar
  display.setFont(u8g2_font_7x13B_tf);
  display.drawStr(0, 12, "ENV MONITOR");
  display.drawLine(0, 14, 127, 14);

  display.setFont(u8g2_font_6x10_tf);

  // Gas reading
  char line1[32], line2[32], line3[32], line4[32];
  snprintf(line1, sizeof(line1), "Gas Raw : %d", gasRaw);
  snprintf(line2, sizeof(line2), "Gas V   : %.2fV", gasV);
  display.drawStr(0, 27, line1);
  display.drawStr(0, 38, line2);

  // DHT22 data
  if (temp > -999 && hum > -999) {
    snprintf(line3, sizeof(line3), "Temp    : %.1f C", temp);
    snprintf(line4, sizeof(line4), "Humidity: %.1f %%", hum);
  } else {
    snprintf(line3, sizeof(line3), "Temp    : --");
    snprintf(line4, sizeof(line4), "Humidity: --");
  }
  display.drawStr(0, 49, line3);
  display.drawStr(0, 60, line4);

  display.sendBuffer();
}

unsigned long lastMQ5Read = 0;

void loop() {
  // --- Read incoming UART data from ESP32 #1 ---
  while (Serial2.available()) {
    char c = Serial2.read();
    if (c == '\n') {
      float t, h;
      if (parsePayload(uartBuffer, t, h)) {
        receivedTemp = t;
        receivedHum  = h;
        Serial.println("[ESP32 #2] Received → T:" + String(t) + " H:" + String(h));
      }
      uartBuffer = "";
    } else {
      uartBuffer += c;
    }
  }

  // --- Read MQ-5 every interval ---
  if (millis() - lastMQ5Read >= MQ5_READ_INTERVAL_MS) {
    lastMQ5Read = millis();

    int gasRaw = analogRead(MQ5_PIN);          // 0–4095 (12-bit ADC)
    float gasV = gasRaw * (3.3f / 4095.0f);   // Convert to voltage

    Serial.printf("[ESP32 #2] MQ-5 Raw=%d  V=%.2f\n", gasRaw, gasV);

    updateDisplay(gasRaw, gasV, receivedTemp, receivedHum);
  }
}
