/*
Pin Input Output

write by dezhichen (c8d8z8@gmail.com)
*/
int switch_pin = 2;
int switch_value;
int my_led = 13;

void setup(){
  pinMode(switch_pin, INPUT);
  pinMode(my_led, OUTPUT);
}

void loop(){
  switch_value = digitalRead(switch_pin);
  if (switch_value == HIGH){
    digitalWrite(my_led, LOW);
  }else {
    digitalWrite(my_led, HIGH);
  }
}
