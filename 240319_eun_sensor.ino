int pin_PIR = 18;
char PIR_flag = 0;

void PIR_ISR(void){
  PIR_flag=1;
 }

 void setup(){
  Serial.begin(9600);
  pinMode(pin_PIR,INPUT);
  pinMode(19,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(pin_PIR),PIR_ISR,RISING);
 }

 void loop(){
  if(PIR_flag==1){
    Serial.println("Detected");
    digitalWrite(19,HIGH);
    PIR_flag=0;

  }
  else if(PIR_flag==0){
   Serial.println("Not Detected");
    digitalWrite(19,LOW);
  }
  delay(500);
 }