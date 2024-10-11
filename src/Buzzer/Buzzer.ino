int Buzzer = D4;
int PushButton = D3;

void setup() {
    pinMode (Buzzer, OUTPUT);
    pinMode (PushButton, INPUT); 

}

void loop() {
    if(PushButton == HIGH) { 
        digitalWrite (Buzzer, HIGH);
    }else{
        digitalWrite (Buzzer, LOW);
    }
}