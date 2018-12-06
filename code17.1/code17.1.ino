
void setup() 
{
  // set the digital pin1 as output.
  pinMode(D1, OUTPUT); 
}
void loop() 
{
  // turn the LED on
  digitalWrite(D1 , HIGH); 

  // wait for 1 second.
  delay(1000);   

  // turn the LED off.
  digitalWrite(D1 , LOW); 

  // LED is OFF for 3 second.
  delay(3000);         
}
