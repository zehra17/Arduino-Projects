#define led 3
#define pot A0
int deger;

void setup() {
  pinMode(led, OUTPUT); // LED pinini çıkış olarak ayarla
}

void loop() {
  deger = analogRead(pot); // Potansiyometre değerini oku
  deger = deger / 4; // 0-1023 aralığını 0-255 aralığına indir
  analogWrite(led, deger); // PWM sinyalini LED'e gönder
}
