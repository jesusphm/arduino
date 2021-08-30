const int ledPIN = 0;
const int switchPIN = 8;
int reading = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPIN , OUTPUT); 
  pinMode(switchPIN , INPUT);  

}

void loop(){
    reading = digitalRead(switchPIN);
    digitalWrite(ledPIN, reading);
}
