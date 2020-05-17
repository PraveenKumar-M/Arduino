//this script helps you to understand the function of reset button

const int x = LED_BUILTIN;

void setup() {
  // put your setup code here, to run once:
  pinMode(x,OUTPUT);
  digitalWrite(x,HIGH);
  delay(1000);
  digitalWrite(x,LOW);
  delay(1000);
  digitalWrite(x,HIGH);
  delay(1000);
  digitalWrite(x,LOW);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(x,HIGH);
  delay(100);
  digitalWrite(x,LOW);
  delay(100);
}
