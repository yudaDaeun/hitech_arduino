int pin_SOUND = A6;

int LED[] = {11,12,13,14,15,16,17,18,19};

void setup() {
  Serial.begin(115200);
  pinMode(pin_SOUND,INPUT);
  pinMode(LED,OUTPUT);

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
}