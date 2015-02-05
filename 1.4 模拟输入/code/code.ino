/*
PWM analog output

write by dezhichen (c8d8z8@gmail.com)
*/

int pot_val;

void setup(){
  Serial.begin(9600);
}

void loop(){
  pot_val = analogRead(0);
  Serial.println(pot_val);
}
