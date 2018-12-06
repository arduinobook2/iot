
void setup() 
{
 // Initialize the LED_BUILTIN pin as an output
  pinMode(LED_BUILTIN, OUTPUT);     
}

void loop()
{
  // Turn the LED on by making the voltage LOW.
  //This is because it is active low on the ESP8266.
  digitalWrite(LED_BUILTIN, LOW);   

  // Wait for a second
  delay(1000);             

  // Turn the LED off by making the voltage HIGH    
  digitalWrite(LED_BUILTIN, HIGH); 

  // Wait for two seconds
  delay(2000);                      
}
