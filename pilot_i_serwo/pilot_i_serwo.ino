#include <IRremote.h>
const int RECV_PIN = 11;
#include <Servo.h>
Servo SERVO_1;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  SERVO_1.attach(6);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }

  if (results.value == 0xFF30CF
) { 
    SERVO_1.write (180);
    results.value = 0x00000000;
  }

  if (results.value == 0xFF18E7
) { 
  SERVO_1.write (70);
    results.value = 0x00000000;
  }
  
}
