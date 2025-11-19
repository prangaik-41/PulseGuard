// ----------------------------
// 🔹 Motor Control Pins
// ----------------------------
#define MOTOR1 12
#define MOTOR2 13
#define MOTOR3 15

void setup() {
  Serial.begin(115200);
  
  // Set motor pins as outputs
  pinMode(MOTOR1, OUTPUT);
  pinMode(MOTOR2, OUTPUT);
  pinMode(MOTOR3, OUTPUT);
  
  // Make sure all motors are OFF initially
  digitalWrite(MOTOR1, LOW);
  digitalWrite(MOTOR2, LOW);
  digitalWrite(MOTOR3, LOW);

  Serial.println("✅ Motor Test Starting...");
}

void loop() {
  // Motor 1 test
  Serial.println("Motor 1 ON");
  digitalWrite(MOTOR1, HIGH);
  delay(1000);
  Serial.println("Motor 1 OFF");
  digitalWrite(MOTOR1, LOW);
  delay(500);

  // Motor 2 test
  Serial.println("Motor 2 ON");
  digitalWrite(MOTOR2, HIGH);
  delay(1000);
  Serial.println("Motor 2 OFF");
  digitalWrite(MOTOR2, LOW);
  delay(500);

  // Motor 3 test
  Serial.println("Motor 3 ON");
  digitalWrite(MOTOR3, HIGH);
  delay(1000);
  Serial.println("Motor 3 OFF");
  digitalWrite(MOTOR3, LOW);
  delay(500);

  // All motors ON together
  Serial.println("All motors ON!");
  digitalWrite(MOTOR1, HIGH);
  digitalWrite(MOTOR2, HIGH);
  digitalWrite(MOTOR3, HIGH);
  delay(1500);

  Serial.println("All motors OFF!");
  digitalWrite(MOTOR1, LOW);
  digitalWrite(MOTOR2, LOW);
  digitalWrite(MOTOR3, LOW);
  delay(2000);
}
