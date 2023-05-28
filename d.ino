void setup() {
  // put your setup code here, to run once:
  
  // designate pin 13 as an OUTPUT pin for the LED
  pinMode (5, OUTPUT);

  // designate pin A0 as an Analog INPUT for the potentiometer
  pinMode (A1, INPUT);

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println  (A1);

  int potValue = analogRead (A1);

  digitalWrite (5, HIGH);

  delay (potValue);

  digitalWrite (5, LOW);

  delay (potValue);
}
