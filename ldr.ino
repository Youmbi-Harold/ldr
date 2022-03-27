int ldr=A0; //setting sensing pin to analog0
int control_pin=4;//setting the contol pin to digital pin 4
int brightness; //declaring the container for my analog values collected
int ledpin = 8;//setting my control led pin to digital pin 8
int wait = 500;//delay of half a millisecond
void setup() {
  pinMode(ldr,INPUT); //setting as input
  pinMode(control_pin,OUTPUT);//setting as output
  pinMode(ledpin, OUTPUT);//setting as output
  Serial.begin(9600);//initialising baud rate to 9600
  // put your setup code here, to run once:

}

void loop() {
  brightness = analogRead(ldr);//collecting my analog values
  delay(wait); //delay for reading the analog values
  if (brightness > 200)// when the analog value will be more than 200,the house bulb will come on and vice versa
  {
    digitalWrite(control_pin,HIGH);//Sending a high signal to the relay so that the bulb comes on
     Serial.println(brightness);
    digitalWrite(ledpin, LOW);// my control led pin will go off indicating it is night and my normal bulb is on
    delay(wait);
  }
  else{
  digitalWrite(control_pin,LOW);
  Serial.println(brightness);
  digitalWrite(ledpin, HIGH);
  delay(wait);
  }
  // put your main code here, to run repeatedly:
/*after sending the code to arduino, normally when the analog value is more than 200, it indicates that there is sunlight but when the coondition was verified my bulb came on 
so I inverted the if and else statements above*/
}
