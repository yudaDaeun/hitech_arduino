void setup() {
int i;
for(i = 11; i < 21; i++){
  pinMode(i, OUTPUT);
}
}
void loop() {
 A();
 delay(5000);
 B();
 A();
 delay(4000);
 B();
 A();
 delay(3000);
 B();
 A();
 delay(2000);
 B();
 

}

void A(){
  int a;
for(a = 11; a < 16; a++){
  digitalWrite(a, HIGH);
   delay(1000);   
  digitalWrite(a, LOW);
}
}
void B(){
  int a;
for(a = 16; a <21; a++){
  digitalWrite(a, HIGH);
   delay(1000);   
  digitalWrite(a, LOW);
}
}
 /* digitalWrite(11, HIGH);
   delay(300);   
 digitalWrite(11, LOW);

  digitalWrite(12, HIGH);
   delay(300);   
 digitalWrite(12, LOW);

    digitalWrite(13, HIGH);
   delay(300);   
 digitalWrite(13, LOW);   

 digitalWrite(14, HIGH);
   delay(300);   
 digitalWrite(14, LOW);

 digitalWrite(15, HIGH);
   delay(300);   
 digitalWrite(15, LOW);

digitalWrite(16, HIGH);
   delay(300);   
 digitalWrite(16, LOW);

 digitalWrite(17, HIGH);
   delay(300);   
 digitalWrite(17, LOW);

 digitalWrite(18, HIGH);
   delay(300);   
 digitalWrite(18, LOW);

  digitalWrite(19, HIGH);
   delay(300);   
 digitalWrite(19, LOW);

digitalWrite(20, HIGH);
   delay(300);   
 digitalWrite(20, LOW);

  digitalWrite(19, HIGH);
   delay(300);   
 digitalWrite(19, LOW);

 digitalWrite(18, HIGH);
   delay(300);   
 digitalWrite(18, LOW);


 digitalWrite(17, HIGH);
   delay(300);   
 digitalWrite(17, LOW);

digitalWrite(16, HIGH);
   delay(300);   
 digitalWrite(16, LOW);

 digitalWrite(15, HIGH);
   delay(300);   
 digitalWrite(15, LOW);

 digitalWrite(14, HIGH);
   delay(300);   
 digitalWrite(14, LOW);  

    digitalWrite(13, HIGH);
   delay(300);   
 digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
   delay(300);   
 digitalWrite(12, LOW);

  digitalWrite(11, HIGH);
   delay(300);   
 digitalWrite(11, LOW); */
