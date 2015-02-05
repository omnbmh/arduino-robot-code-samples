/*
analog input PWM output

write by dezhichen (c8d8z8@gmail.com)
*/

int pot_val;
int pwm_pin = 3;
int pwm_val;

void setup(){
  pinMode(pwm_pin, OUTPUT);
}

void loop(){
  pot_val = analogRead(0);
  pwm_val = pot_val / 4;
  if (pwm_val > 255){
    pwm_val = 255;
  }
  if (pwm_val < 0){
    pwm_val = 0;
  }
  analogWrite(pwm_pin, pwm_val);
}
