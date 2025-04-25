int LEDpin2=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin2,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(LED_BUILTIN, HIGH);
digitalWrite(LEDpin2, LOW);
delay(500);

digitalWrite(LEDpin2, HIGH);
digitalWrite(LED_BUILTIN, LOW);
delay(500);
}
