/*
 * Project bruxism_monitor
 * Description: Monitor clenching force with sensor
 * Author: dvanderlaarse
 * Date: 2021-03-28
 */


// Set up logging
SerialLogHandler serLog(LOG_LEVEL_WARN, {{"app", LOG_LEVEL_INFO}});

int forceSensorPin = A0;
int val = 0;

void setup() {

  // Start Serial
  Serial.begin(115200);
}


void loop() {
  
  val = analogRead(forceSensorPin);  // read the analogPin
  Log.info("Force Analog Value: %i", val);
  delay(1000);

}