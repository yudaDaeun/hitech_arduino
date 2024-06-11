int led =10;

void setup() {
  Serial.begin(9600);
 Serial3.begin(9600);
 pinMode(led,OUTPUT);
}

void loop() {  //SERIAL MONITOR
  if(Serial3.available()>0){ //어떤 값이 들어왔을때(1)
    char recv = Serial3.read(); //RECV=문자변수, 수신(블루투스-아두이노 recv에 저장)
    Serial3.write(recv);//아두이노-블루투스로 보내는것
    Serial3.println(recv);// 출력\

  if(recv=='1'){
    tone(led,HIGH);
  }
  if(recv=='2'){
    tone(led,LOW);
  }
  }
}
