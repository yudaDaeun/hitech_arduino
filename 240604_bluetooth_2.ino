void setup() {
  Serial.begin(9600);
 Serial3.begin(9600);
}

/*void loop() {  //SERIAL MONITOR
  if(Serial3.available()>0){
    char recv = Serial3.read();
    Serial3.write(recv);
    Serial3.println(recv);
  }
}*/
void loop() {  ///NAME CHANGE
 if(Serial3.available()){
  Serial.write(Serial3.read());
 }
 if(Serial.available()){
  Serial3.write(Serial.read());
 }
}
