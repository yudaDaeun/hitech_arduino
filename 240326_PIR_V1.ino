int cnt=0;
int aa0;
float volt;
void setup(){
Serial.begin(9600);

}

void loop() {
    aa0=analogRead(A0);
    volt=(float)aa0*5/1023;
    Serial.print("cnt=");
    Serial.print(cnt);
    Serial.print("aa0=");
    Serial.print(aa0);
    Serial.print("volt=");
    Serial.println(volt);
    delay(100);
    cnt++;

}