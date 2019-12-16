const int melody[] = {262,294,330,349,392,440,494,523};

void setup() {
  pinMode(13, OUTPUT);  // Piezo speaker
  pinMode(8, OUTPUT);   // Trigger
  pinMode(9, INPUT);    // Echo
  Serial.begin(9600);
}

void loop() {
  digitalWrite(8, LOW);
  delayMicroseconds(2);
  digitalWrite(8, HIGH);
  delayMicroseconds(10);
  digitalWrite(8, LOW);

  double duration = pulseIn(9, HIGH);
  double cm = duration*340/10000/2;
  Serial.println(cm);

  if(cm < 5) {        // Do
    tone(13, melody[0], 1000);
  }
  else if(cm < 10) {   // Re
    tone(13, melody[1], 1000);
  }
  else if(cm < 15) {   // Mi
    tone(13, melody[2], 1000);
  }
  else if(cm < 20) {   // Fa
    tone(13, melody[3], 1000);
  }
  else if(cm < 25) {   // Sol
    tone(13, melody[4], 1000);
  }
  else if(cm < 30) {   // Ra
    tone(13, melody[5], 1000);
  }
  else if(cm < 35) {   // Si
    tone(13, melody[6], 1000);
  }
  else if(cm < 40) {   // Do
    tone(13, melody[7], 1000);
  }
  else {
    noTone(13);
  }

  delay(100);
}

