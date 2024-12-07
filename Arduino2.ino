#define BUTTON 8 // Büyük harfle yazıldı.
#define LED 10   // Büyük harfle yazıldı.

int buton_durumu = 0;

void setup() {
  pinMode(BUTTON, INPUT); // Doğru pin tanımı
  pinMode(LED, OUTPUT);   // Doğru pin tanımı
}

void loop() {
  buton_durumu = digitalRead(BUTTON); // Eksik ";" eklendi.

  if (buton_durumu == 1) { // Şart doğruysa
    digitalWrite(LED, HIGH); // LED'i aç
  } else { 
    digitalWrite(LED, LOW); // LED'i kapat
  }
}

