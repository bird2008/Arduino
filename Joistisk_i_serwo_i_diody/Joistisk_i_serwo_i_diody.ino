#include <U8g2lib.h>
#include <Servo.h>
Servo SERVO_1;

// Analog Joystick
const PROGMEM int X_pin = A1;     // analog pin connected to X output
const PROGMEM int Y_pin = A0;     // analog pin connected to Y output
const PROGMEM int FIRE_BUT2 = 2;  // digital pin connected to switch output

//Tactile switch
const PROGMEM int FIRE_BUT = A2;

bool Switchvalue = HIGH;

int zwrotnica = 1;

void setup() {
  pinMode(FIRE_BUT2, INPUT_PULLUP);
  pinMode(FIRE_BUT, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);

  SERVO_1.attach(6);  
}

void loop() {
  if ((!digitalRead(FIRE_BUT))||(!digitalRead(FIRE_BUT2))){
    Switchvalue = false;
  }else{
    Switchvalue = true;
  }
  Serial.print("Switch:  ");
  Serial.print(Switchvalue);
  Serial.print("\n");
  
  if (!Switchvalue) {
    zwrotnica = -zwrotnica;
  }
  if (zwrotnica == 1) {
    SERVO_1.write(90);
    digitalWrite(5, HIGH);
    delay(400);
    digitalWrite(5, LOW);      
  }
  else
  {
    SERVO_1.write(0);
    digitalWrite(4, HIGH);
    delay(400);  
    digitalWrite(4, LOW);    
  }
  delay(250);
}
