int pin = 5;
int n = 0;
 
  
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
    if (Serial.available()) {
 String inString = Serial.readStringUntil('\n');
  Serial.println(inString);
  if(inString=="1"){
    n = n+1;
  }
  else if(inString=="0"){
    n = n-1;
  }
  Serial.println(n);
    }
  digitalWrite(pin,HIGH);
  delayMicroseconds(1078+n);
  digitalWrite(pin,LOW);
  delayMicroseconds(18922-n);
}
