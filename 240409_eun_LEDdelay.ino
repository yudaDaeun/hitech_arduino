int pin_SOUND = A6;
int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
void setup() {
  Serial.begin(115200);
  pinMode(pin_SOUND,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

 void loop(){
  int ADC_data= analogRead(pin_SOUND);
  Serial.print("ADC Data : ");
  Serial.print(ADC_data);



  if(ADC_data < 100){
    digitalWrite(LED1,HIGH);
  }
  else if(ADC_data > 100){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
  }
  else if(ADC_data > 200){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
  }
  delay(100);
  f
}