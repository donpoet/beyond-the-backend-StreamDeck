#include <Arduino.h>
#include <SSD1306Ascii.h>

const int button_pin0 = 0; // Red
const int button_pin1 = 4; // Yellow
const int button_pin2 = 12; // Green
const int button_pin3 = 14; // Blue
const int button_pin4 = 5; // Black

boolean button0Released = true;
boolean button1Released = true;
boolean button2Released = true;
boolean button3Released = true;
boolean button4Released = true;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(button_pin0, INPUT_PULLUP);
  pinMode(button_pin1, INPUT_PULLUP);
  pinMode(button_pin2, INPUT_PULLUP);
  pinMode(button_pin3, INPUT_PULLUP);
  pinMode(button_pin4, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation

  // Button 0
  if(digitalRead(button_pin0) == 0 && button0Released) {
    Serial.println("Button0 pressed");
    button0Released = false;
  }
  if(digitalRead(button_pin0) == 1 && !button0Released) {
    button0Released = true;
  }
  // Button 1
  if(digitalRead(button_pin1) == 0 && button1Released) {
    Serial.println("Button1 pressed");
    button1Released = false;
  }
  if(digitalRead(button_pin1) == 1 && !button1Released) {
    button1Released = true;
  }
  // Button 2
  if(digitalRead(button_pin2) == 0 && button2Released) {
    Serial.println("Button2 pressed");
    button2Released = false;
  }
  if(digitalRead(button_pin2) == 1 && !button2Released) {
    button2Released = true;
  }
  // Button 3
  if(digitalRead(button_pin3) == 0 && button3Released) {
    Serial.println("Button3 pressed");
    button3Released = false;
  }
  if(digitalRead(button_pin3) == 1 && !button3Released) {
    button3Released = true;
  }
  // Button 4
  if(digitalRead(button_pin4) == 0 && button4Released) {
    Serial.println("Button4 pressed");
    button4Released = false;
  }
  if(digitalRead(button_pin4) == 1 && !button4Released) {
    button4Released = true;
  }
}
