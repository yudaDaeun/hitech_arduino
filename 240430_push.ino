
int pin_SEL = 49;
int pin_UP= 45;
int pin_DOWN= 46;
int pin_LEFT = 47;
int pin_RIGHT = 48;
int pin_BUZZER = 35;


void setup(){
Serial.begin(115200);
pinMode(pin_UP,INPUT);
/*pinMode(pin_DOWN,INPUT);
pinMode(pin_LEFT,INPUT);
pinMode(pin_RIGHT,INPUT);*/
pinMode(pin_BUZZER,OUTPUT);
}

void loop(){
  int UP= digitalRead(pin_UP);
  Serial.print(", UP : ");
  Serial.println(digitalRead(pin_UP));

 if(UP == 0){
  tone(pin_BUZZER,261); //tone= Hz setting , do
  delay(500);
  
 }
  /*Serial.print(", UP : ");
  Serial.print(digitalRead(pin_UP));
  Serial.print(", DOWN : ");
  Serial.print(digitalRead(pin_DOWN));
  Serial.print(", LEFT : ");
  Serial.print(digitalRead(pin_LEFT));
  Serial.print(", RIGHT : ");
  Serial.println(digitalRead(pin_RIGHT));*/
  noTone(pin_BUZZER);
    delay(100);
}