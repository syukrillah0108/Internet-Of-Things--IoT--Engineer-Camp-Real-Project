const int buttonSaya = D2;
const int ledSaya = D3;
int buttonStatusSaya = 0;

void setup(){
    pinMode(ledSaya, OUTPUT);
    pinMode(buttonSaya, INPUT);
}

void loop(){
    buttonStatusSaya = digitalRead(buttonSaya);

    if (buttonStatusSaya == HIGH){
        digitalWrite(ledSaya, HIGH);
    }else{
        digitalWrite(ledSaya, LOW);
    }
}