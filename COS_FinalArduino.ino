const int ledPin1 = 13;
const int ledPin2 = 10;
const int ledPin3 = 8;
const int ldrPin = A0;

void setup() {

  Serial.begin(9600);

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  pinMode(ldrPin, INPUT);

}

void loop() {

  int ldrStatus = analogRead(ldrPin);
  Serial.println(ldrStatus);
  if (ldrStatus <=300) {

    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);

    Serial.println("LDR is DARK, LED is ON");

  }

  else if (ldrStatus<=900) {

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    
    Serial.println("---------------");

  }
  else {

    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, HIGH);
    
    Serial.println("----+++++-------");

  }

}
