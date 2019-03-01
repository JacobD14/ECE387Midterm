// Jacob Decker
// ECE387 - Midterm - Muscle Sensor

/* 
 * Reads in the analog input from the muscle sensor and lights up corresponding LEDs according to the values. 
 */

int blue = 12;
int red = 10;
int green = 6;
int yellow = 4;
int white = 2;

void setup() {
  pinMode(blue, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(white, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(white, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(blue, LOW);
  int muscleVal = analogRead(A0);
  Serial.println(muscleVal);
  
  if (muscleVal < 200) {
    digitalWrite(white, HIGH);
  } else if (muscleVal > 200 && muscleVal < 400) {
    digitalWrite(white, HIGH);
    digitalWrite(yellow, HIGH);
  } else if (muscleVal > 400 && muscleVal < 600) {
    digitalWrite(white, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
  } else if (muscleVal > 600 && muscleVal < 800) {
    digitalWrite(white, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
  } else {
    digitalWrite(white, HIGH);
    digitalWrite(yellow, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
  }
  delay(100);
}
