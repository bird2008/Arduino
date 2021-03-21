void setup() {
  pinMode(A5, OUTPUT); //Konfiguracja A5 jako wyjście
}
 
void loop() {
  int czestotliwosc = 0;
  for (czestotliwosc = 31; czestotliwosc < 25535; czestotliwosc++) { 
    tone(A5, czestotliwosc); //Wygeneruj sygnał o częstotliwości 1000Hz na pinie A5  
  }
  noTone(A5); 
  
}
