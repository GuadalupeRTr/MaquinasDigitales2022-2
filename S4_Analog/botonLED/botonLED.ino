#define digitalReadPin 35
#define digitalWritePin 32
bool pinStatus;

void setup() {
  Serial.begin(115200);
  pinMode(digitalReadPin, INPUT);
  pinMode(digitalWritePin, OUTPUT);  
}

void loop() {
  pinStatus = digitalRead(digitalReadPin);
  Serial.println(digitalRead(digitalReadPin));

  //Una subrutina que encienda el LED si el botón esta presionad 
  //Si no esta presionado, que lo apague
  //....
  if (pinStatus == HIGH){
    digitalWrite(digitalWritePin, HIGH);
  }else{
    digitalWrite(digitalWritePin, LOW);
  }
}
