#define POT_PIN A0
void setup() {
    Serial.begin(9600);
}

void loop() {
    int PotValue = analogRead(POT_PIN);
    Serial.println(PotValue);
    delay(100);
}