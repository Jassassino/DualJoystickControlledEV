int Opto_pin =4;
void setup() {
  // put your setup code here, to run once:
 pinMode(Opto_pin, OUTPUT);;
 digitalWrite(Opto_pin, LOW);
}

void loop() {//Ligar um optocoupler com baterias ao motor ou Lazer de 3000W
  
  digitalWrite(Opto_pin,HIGH);
  delay(1000);
  digitalWrite(Opto_pin,LOW);
  delay(1000);
}
