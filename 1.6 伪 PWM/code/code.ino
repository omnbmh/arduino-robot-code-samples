/*
fake PWM

write by dezhichen (c8d8z8@gmail.com)
*/

int my_led = 13;
int pot_val;
int adj_val;
int cycle_val = 33;

void setup(){
  //Serial.begin(9600);
  pinMode(my_led, OUTPUT);
}

void loop(){
  pot_val = analogRead(0);
  adj_val = map(pot_val, 0, 1023, 0, cycle_val);
  //Serial.println(adj_val);
  digitalWrite(my_led, HIGH);
  delay(adj_val);
  digitalWrite(my_led, LOW);
  delay(cycle_val - adj_val);
}
