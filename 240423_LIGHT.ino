//A4-CDS_A
int pin_CDS = A4;

void setup(){

  Serial.begin(115200); 
  pinMode(pin_CDS,INPUT);//input: light sensor
  pinMode(11,OUTPUT);// output: LED sensor
}
void loop(){
  Serial.print("ADC Data : ");
  int ADC_data = analogRead(pin_CDS);
  Serial.println(ADC_data);

  if(ADC_data>500){
    digitalWrite(11,LOW);
  }
  else{
    digitalWrite(11,HIGH);
  }
  delay(10); //빛의양이 500이상일경우, LED off
}