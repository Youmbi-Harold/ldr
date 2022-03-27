int ldr=A0;
int control_pin=4;
int brightness;
int ledpin = 8;
void setup() {
  pinMode(ldr,INPUT);
  pinMode(control_pin,OUTPUT);
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  brightness = analogRead(ldr);
  delay(500);
  if (brightness > 200)
  {
    digitalWrite(control_pin,!LOW);
     Serial.println(brightness);
    digitalWrite(ledpin, HIGH);
    delay(500);
  }
  else{
  digitalWrite(control_pin,!HIGH);
  Serial.println(brightness);
  digitalWrite(ledpin, LOW);
  delay(500);
  }
  // put your main code here, to run repeatedly:

}
