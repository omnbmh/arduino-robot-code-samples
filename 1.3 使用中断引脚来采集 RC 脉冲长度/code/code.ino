/*
Captrue R/C

write by dezhichen (c8d8z8@gmail.com)
*/

int my_led = 13;

volatile long servo_startPulse;
volatile unsigned int pulse_val;
int servo_val;

void setup(){
  Serial.begin(9600);
  pinMode(servo_val, INPUT);
  attachInterrupt(0, rc_begin, RISING);
}

void rc_begin(){
  servo_startPulse = micros();
  detachInterrupt(0);
  attachInterrupt(0, rc_end, FALLING);
}

void rc_end(){
  pulse_val = micros() - servo_startPulse;
  detachInterrupt(0);
  attachInterrupt(0, rc_begin, RISING);
}

void loop(){
  servo_val = pulse_val;
  if (servo_val > 600 && servo_val < 2400){
    digitalWrite(my_led, HIGH);
    Serial.println(servo_val);
  }else {
    digitalWrite(my_led, LOW);
  }
}
