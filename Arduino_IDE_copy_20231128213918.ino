int LED_Pin=6; //LED pin connected to pin6
int Temperature_Pin=A0 ;//Lm35 sensor connected to analog pin A0
 
int Temperature_sensor_value = 30;
int blinkIntervalLow = 250; 
int blinkIntervalHigh = 500; 

void setup() {
  pinMode(6, OUTPUT);
  pinMode(A0, INPUT);
  
}

void loop() {
  int sensorValue = analogRead(TEMPERATURE_PIN);
  float temperatureC = (sensorValue * 5.0) / 1024.0 * 100.0;//Convert sensor value to degree celcious
  
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");
  
  if (temperatureC <Temperature_sensor_value ) {
    int blinkLED(blinkIntervalLow);
  } else {
    int blinkLED(blinkIntervalHigh);
  }
}



