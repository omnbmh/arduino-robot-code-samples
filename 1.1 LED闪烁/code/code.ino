/*
Blink the LED on pin 13

write by dezhichen (c8d8z8@gmail.com)
*/
int my_led = 13;

void setup(){
  pinMode(my_led, OUTPUT);
}

void loop(){
  digitalWrite(my_led, HIGH);
  delay(1000);
  digitalWrite(my_led, LOW);
  delay(1000);
}
