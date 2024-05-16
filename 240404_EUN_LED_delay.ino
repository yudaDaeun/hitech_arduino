int pwm=6;
int speed=30;//80~
void setup(){
  Serial.begin(9600);
  pinMode(pwm,OUTPUT);
}
void loop(){
  analogWrite(pwm,speed++);
  if(speed>=255)speed=30;
 Serial.print("speed=");
 delay(200);

}
