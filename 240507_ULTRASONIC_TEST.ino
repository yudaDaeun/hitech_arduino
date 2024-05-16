int pin_UL_TRIG =7;
int pin_UL_OUT = 8;
int LED_RED =11;

void setup(){
  Serial.begin(115200);
  pinMode(pin_UL_OUT,INPUT);
  pinMode(pin_UL_TRIG,OUTPUT);
  digitalWrite(pin_UL_TRIG,0);
  pinMode(11,OUTPUT);
}

void loop(){
  unsigned long microseconds,distance_cm;
  digitalWrite(pin_UL_TRIG,0);
  delayMicroseconds(2);
  digitalWrite(pin_UL_TRIG,1);
  delayMicroseconds(10);
  digitalWrite(pin_UL_TRIG,0);

  microseconds= pulseIn(pin_UL_OUT,HIGH);
  distance_cm = microseconds*17/1000;

  Serial.print("Time :");
  Serial.print(microseconds);
  Serial.print("[us].Dist :");
  Serial.print(distance_cm);
  Serial.println("[cm]");


  if(distance_cm < 15){
    digitalWrite(11,HIGH);
    
  }
    else if(distance_cm < 30){
     digitalWrite(11,HIGH);
     delay(500);
     digitalWrite(11,LOW);
    }
    
  
  delay(1000);
}