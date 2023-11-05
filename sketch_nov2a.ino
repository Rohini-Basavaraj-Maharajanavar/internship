int led=42;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
Serial.println("On");
delay(1000);
digitalWrite(led,LOW);
Serial.println("Off");
delay(1000);
}
