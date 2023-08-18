int pin_led = 8;

void setup() {
  pinMode(pin_led, OUTPUT);
}

void loop() {
  digitalWrite(pin_led, HIGH);  
  delay(1000);                      
  digitalWrite(pin_led, LOW);   
  delay(1000);                      
}
