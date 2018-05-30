/* MOISTURE DETECTION USING FC-28 MOISTURE SENSOR
 *  
 * Description: This code reads the amalog values from the moisture sensor, maps it onto 
 * a scale of 0% to 100% and Displays the readings on serial monitor. 
 * 
 * Connection Details:
 * 
 *  Arduino Pin No.               To Pin on Sensor
 *  
 *    3.3V                          VCC
 *    Gnd                           Gnd
 *    A0                            A0 out
 *    
 *    
 * Code By: Mayank Pathak
 *          University of Maryland, College Park
 * 
 * 
 */


void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int scaledValue;
  scaledValue = map(sensorValue,173,90,0,100);
  // print out the value you read:
  Serial.print("Reading:");
  Serial.println(sensorValue);
  Serial.print("Mositure : ");
  Serial.print(scaledValue);
  Serial.println("%");
  delay(1000);      // delay in between reads for stability
}
