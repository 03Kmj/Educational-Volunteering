int piezo = 7;
int tones[] = {523, 587, 659, 698, 784, 880, 988, 1047};

void setup() {
  pinMode(piezo, OUTPUT);
  for(int i = 0; i < 8; i++){
    tone(piezo, tones[i]);
    delay(500);
  }
  noTone(piezo);
}

void loop(){}