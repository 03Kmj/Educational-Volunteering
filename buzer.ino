int piezo = 7;

void setup() {
  pinMode(piezo, OUTPUT);

  tone(piezo, 523); //5옥타브 도
  delay(500);
  tone(piezo, 587); //5옥타브 레
  delay(500);
  tone(piezo, 659); //5옥타브 미
  delay(500);
  tone(piezo, 698); //5옥타브 파
  delay(500);
  tone(piezo, 784); //5옥타브 솔
  delay(500);
  tone(piezo, 880); //5옥타브 라
  delay(500);
  tone(piezo, 988); //5옥타브 시
  delay(500);
  tone(piezo, 1047); //5옥타브 도
  delay(500);
  noTone(piezo);
}

void loop(){}