int pin_BUZZER = 35;
void setup(){
  pinMode(pin_BUZZER,OUTPUT);
}

void loop(){
  /*digitalWrite(pin_BUZZER,HIGH);
  delay(1000);
  digitalWrite(pin_BUZZER,LOW);
  delay(1000);*/

  tone(pin_BUZZER,261); //tone= Hz setting
  delay(1000);
 tone(pin_BUZZER,293);
  delay(1000);
  tone(pin_BUZZER,329);
  delay(1000);
  tone(pin_BUZZER,349);
  delay(1000);
  tone(pin_BUZZER,391);
  delay(1000);
  tone(pin_BUZZER,440);
  delay(1000);
  tone(pin_BUZZER,493);
  delay(1000);
  tone(pin_BUZZER,523);
  delay(1000);
  
  noTone(pin_BUZZER);
  delay(1000);
}