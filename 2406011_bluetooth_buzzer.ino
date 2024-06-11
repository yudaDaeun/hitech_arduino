int pin_buzzer=35;

void setup() {
  Serial.begin(9600);
 Serial3.begin(9600);
 pinMode(pin_buzzer,OUTPUT);
}

void loop() {  //SERIAL MONITOR
  if(Serial3.available()>0){ //어떤 값이 들어왔을때(1)
    char recv = Serial3.read(); //RECV=문자변수, 수신(블루투스-아두이노 recv에 저장)
    Serial3.write(recv);//아두이노-블루투스로 보내는것
    Serial3.println(recv);// 출력\

  if(recv=='1'){
    tone(pin_buzzer,261);
  }
  if(recv=='2'){
    tone(pin_buzzer,293);
  }
  if(recv=='3'){
    tone(pin_buzzer,329);
  }
  if(recv=='4'){
    tone(pin_buzzer,349);
  }
  if(recv=='5'){
    tone(pin_buzzer,391);
  }
  if(recv=='6'){
    tone(pin_buzzer,440);
  }
  if(recv=='7'){
    tone(pin_buzzer,493);
  }
  if(recv=='8'){
    tone(pin_buzzer,523);
  }
 if(recv=='a'){
    tone(pin_buzzer,277);
  }
  if(recv=='b'){
    tone(pin_buzzer,311);
  }
  if(recv=='c'){
    tone(pin_buzzer,369);
  }
  if(recv=='d'){
    tone(pin_buzzer,415);
  }
  if(recv=='f'){
    tone(pin_buzzer,466);
  }
  
  }
  }
  
/*void loop() {  ///NAME CHANGE
 if(Serial3.available()){
  Serial.write(Serial3.read());
 }
 if(Serial.available()){
  Serial3.write(Serial.read());
 }
}*/
