/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
int led_pin1 = 13;
int led_pin2 = 12;
int led_pin3 = 8;
int blink_duration1 = 400;
int blink_duration2 = 200;
int blink_duration3 = 500;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_pin1,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay (blink_duration1);                      // wait for a second
  digitalWrite(led_pin1,LOW);   // turn the LED off by making the voltage LOW
  delay (blink_duration1);   
  
    digitalWrite(led_pin2, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay (blink_duration2);                      // wait for a second
  digitalWrite(led_pin2, LOW);   // turn the LED off by making the voltage LOW
  delay (blink_duration2);   
   
   digitalWrite(led_pin3, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay (blink_duration3);                      // wait for a second
  digitalWrite(led_pin3, LOW);   // turn the LED off by making the voltage LOW
  delay (blink_duration3);                 // wait for a second
}

