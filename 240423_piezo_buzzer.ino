int pin_BUZZER = 35;//piezo_buzzer
void setup(){
  pinMode(pin_BUZZER,OUTPUT);
}

void loop(){
  /*digitalWrite(pin_BUZZER,HIGH);
  delay(500);
  digitalWrite(pin_BUZZER,LOW);
  delay(500);*/

  /*tone(pin_BUZZER,261); //tone= Hz setting , do
  delay(500);
 tone(pin_BUZZER,293);//re
  delay(500);
  tone(pin_BUZZER,329);//mi
  delay(500);
  tone(pin_BUZZER,349);//pa
  delay(500);
  tone(pin_BUZZER,391);//sol
  delay(500);
  tone(pin_BUZZER,440);//la
  delay(500);
  tone(pin_BUZZER,493);//si
  delay(500);
  tone(pin_BUZZER,523);//high do
  delay(500);*/
  
    tone(pin_BUZZER,329);//mi
   delay(500);
    noTone(pin_BUZZER);
    dalay(50)

    tone(pin_BUZZER,293);//re
    delay(500);
    noTone(pin_BUZZER);
    delay(50);

    tone(pin_BUZZER,261); //tone= Hz setting , do
    delay(500);
    noTone(pin_BUZZER);
    delay(50);

   tone(pin_BUZZER,293);//re
   delay(500);
   noTone(pin_BUZZER);
   delay(50);

   tone(pin_BUZZER,329);//mi
   delay(500);
   noTone(pin_BUZZER);
   delay(50);

   tone(pin_BUZZER,329);//mi 
   delay(500);
    noTone(pin_BUZZER);
   delay(50);

   tone(pin_BUZZER,329);//mi
   delay(1000);

  noTone(pin_BUZZER);
  delay(500);
}
 