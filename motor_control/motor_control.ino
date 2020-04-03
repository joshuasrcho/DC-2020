#define VBATPIN A6
const int dirR = 5;
const int pwmR = 6;
const int dirL = 9;
const int pwmL = 10;


void setup() {
  pinMode(dirL, OUTPUT);
  pinMode(pwmL, OUTPUT);
  pinMode(dirR, OUTPUT);
  pinMode(pwmR, OUTPUT);
  pinMode(VBATPIN, INPUT);
}

void loop() {
  float measuredvbat = analogRead(VBATPIN);
  measuredvbat *= 2;    // we divided by 2, so multiply back
  measuredvbat *= 3.3;  // Multiply by 3.3V, our reference voltage
  measuredvbat /= 1024; // convert to voltage
  Serial.print("VBat: " ); Serial.println(measuredvbat);

    
  digitalWrite(dirL, LOW);
  analogWrite(pwmL, 100);
  
  digitalWrite(dirR, HIGH);
  analogWrite(pwmR, 100);
}


     
    
