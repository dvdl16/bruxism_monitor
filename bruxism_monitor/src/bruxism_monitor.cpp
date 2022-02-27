/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "d:/dev-projects/bruxism_monitor/bruxism_monitor/src/bruxism_monitor.ino"
/*
 * Project bruxism_monitor
 * Description: Monitor clenching force with sensor
 * Author: dvanderlaarse
 * Date: 2021-03-28
 */


// Set up logging
void setup();
void loop();
#line 10 "d:/dev-projects/bruxism_monitor/bruxism_monitor/src/bruxism_monitor.ino"
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