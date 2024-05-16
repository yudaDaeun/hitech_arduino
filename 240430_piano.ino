int pin_UP= 45;
int pin_DOWN= 46;
int pin_LEFT = 47;
int pin_RIGHT = 48;
int pin_BUZZER = 35;

void setup(){
Serial.begin(115200);
pinMode(pin_UP,INPUT);
pinMode(pin_BUZZER,OUTPUT);
}

void loop(){
  int UP= digitalRead(pin_UP);
  Serial.println(digitalRead(pin_UP));

  int DOWN = digitalRead(pin_DOWN);
  Serial.println(digitalRead(pin_DOWN));

  int LEFT = digitalRead(pin_LEFT);
  Serial.println(digitalRead(pin_LEFT));

  int RIGHT = digitalRead(pin_RIGHT);
  Serial.println(digitalRead(pin_RIGHT));


 if(UP == 0){
  tone(pin_BUZZER,523);////do
  delay(500);
  }

  else{
  noTone(pin_BUZZER);
 }
  
  if(DOWN == 0){
     tone(pin_BUZZER,587); ///re
 delay(500);
  }

  else{
  noTone(pin_BUZZER);
 }

  if(LEFT == 0){
     tone(pin_BUZZER,659);///mi
  delay(500);
  }

  else{
  noTone(pin_BUZZER);
 }

  if(RIGHT == 0){
     tone(pin_BUZZER,698); ////pa
  delay(500);
  }

  else{
  noTone(pin_BUZZER);
 }
  
 
}