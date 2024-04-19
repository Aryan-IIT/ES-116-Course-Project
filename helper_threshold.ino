// The code below has been generated using Generative AI
    
    // Define the analog pin connected to the solar panel
    const int solarPin = A0;
    
    void setup() {
      // Initialize serial communication
      Serial.begin(9600);
    }
    
    void loop() {
      // Read the analog voltage from the solar panel
      int sensorValue = analogRead(solarPin);
    
      // Convert the analog reading to voltage (0-5V range)
      float voltage = sensorValue * (5.0 / 1023.0);
    
      // Map the voltage value to a range between 0 and 1023
      int digitizedValue = map(sensorValue, 0, 1023, 0, 1023);
    
      // Print the digitized value to the serial monitor
      Serial.print("Solar Panel Voltage (Digitized): ");
      Serial.println(digitizedValue);
    
      // Delay for a short period before taking the next reading
      delay(500);
    }
