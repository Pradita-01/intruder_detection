
int motionSensorPin = 2;  
int buzzerPin = 3;       
int ledPin = 4;
int motiondetectedfreq = 2000;


void setup() {

  pinMode(motionSensorPin, INPUT);

  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  
  
  Serial.begin(9600);
}

void loop() {

  int motionState = digitalRead(motionSensorPin);

  
  if (motionState == HIGH) {
    
    tone(buzzerPin, motiondetectedfreq);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Motion Detected!");
  }

  else {
  
    noTone(buzzerPin);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
    Serial.println("No Motion");
  }

 
  delay(100);
}
