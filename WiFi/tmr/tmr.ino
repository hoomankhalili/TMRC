#include <WiFi.h>

const char* ssid = "Hooman's iPhone";
const char* password = "Password";

WiFiServer server(12345);

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  server.begin();
  Serial.println("Server started");

  // initialize digital pin 12 & 11 & 10 & 9 as uotput
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  WiFiClient client = server.available();
  if (client) {
    String command = client.readStringUntil('\r');
    if (command == "00") {
      // move forward
      digitalWrite(12, 0);
      digitalWrite(11, 1);
      digitalWrite(10, 1);
      digitalWrite(9, 0);
    } else if (command == "01") {
      // move backward
      digitalWrite(12, 1);
      digitalWrite(11, 0);
      digitalWrite(10, 0);
      digitalWrite(9, 1);      
    } else if (command == "10") {
      // turn right
      digitalWrite(12, 1);
      digitalWrite(11, 0);
      digitalWrite(10, 1);
      digitalWrite(9, 0);      
    } else if (command == "11") {
      // turn left
      digitalWrite(12, 0);
      digitalWrite(11, 1);
      digitalWrite(10, 0);
      digitalWrite(9, 1);
    }
  }
}