int buttonPin = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonPin) == LOW){
    digitalWrite(13, HIGH);
  }
  else{
    digitalWrite(13, LOW);
  }
}
