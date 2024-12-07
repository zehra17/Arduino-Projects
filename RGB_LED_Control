#define red 11
#define green 10
#define blue 9

#define pot A0 // Potansiyometre A0 pinine bağlı

int pot_value;

void deger_oku() {
  // Potansiyometreden değer oku
  pot_value = analogRead(pot);
}

void deger_yaz() {
  // Tüm LED'leri kapat
  analogWrite(red, 0);
  analogWrite(green, 0);
  analogWrite(blue, 0);

  // Potansiyometre değerine göre LED'i etkinleştir
  if (pot_value < 400) {
    // 0-399: Kırmızı
    analogWrite(red, map(pot_value, 0, 399, 0, 255));
  } else if (pot_value < 800) {
    // 400-799: Yeşil
    analogWrite(green, map(pot_value, 400, 799, 0, 255));
  } else {
    // 800-1023: Mavi
    analogWrite(blue, map(pot_value, 800, 1023, 0, 255));
  }
}

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  deger_oku();  // Potansiyometre değerini oku
  deger_yaz();  // RGB LED'e uygula
}
