int pin_SOUND = A6;
int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
int LED4 = 14;
int LED5 = 15;
int LED6 = 16;
int LED7 = 17;
int LED8 = 18;
int LED9 = 19;

void setup() {
  Serial.begin(115200);
  pinMode(pin_SOUND,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
   pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
}

 void loop(){
  int ADC_data= analogRead(pin_SOUND);
  Serial.print("ADC Data : ");
  Serial.print(ADC_data);

if(ADC_data>100){
  Serial.println(" Noise");
}
else{
  Serial.println(" Quite");
}
 
   if(ADC_data > 0){
    digitalWrite(LED1,HIGH);
    delay(100);
  }
  if(ADC_data > 20 ){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    delay(100);
  }
  if(ADC_data > 40){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    delay(100);
  }
      if(ADC_data > 60){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    delay(100);
  }
    if(ADC_data > 80){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    delay(100);
  }
    if(ADC_data > 100){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    delay(100);
  }
    if(ADC_data > 120){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    delay(100);
  }
    if(ADC_data > 140){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED7,HIGH);

    delay(100);
  }
   if(ADC_data > 160){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED8,HIGH);

    delay(100);
  }
   if(ADC_data > 180){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
    digitalWrite(LED5,HIGH);
    digitalWrite(LED6,HIGH);
    digitalWrite(LED7,HIGH);
    digitalWrite(LED8,HIGH);
    digitalWrite(LED9,HIGH);

    delay(100);
  }

    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
    digitalWrite(LED5,LOW);
    digitalWrite(LED6,LOW);
    digitalWrite(LED7,LOW);
    digitalWrite(LED8,LOW);
    digitalWrite(LED9,LOW);

  delay(100);


 }
