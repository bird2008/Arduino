void setup() {
  // put your setup code here, to run once:
pinMode(9, INPUT);
pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(9) == HIGH){
  pinMode(8, INPUT);
  delay(1000);
  pinMode(8, OUTPUT);
}
}
