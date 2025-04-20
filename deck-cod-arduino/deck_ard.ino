const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 7;


void setup() {
    Serial.begin(9600);
    pinMode(button1, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
    pinMode(button3, INPUT_PULLUP);
    pinMode(button4, INPUT_PULLUP);
    pinMode(button5, INPUT_PULLUP);
    pinMode(button6, INPUT_PULLUP);
}

void loop() {
    if (digitalRead(button1) == LOW) {
        Serial.println("1");
        delay(200);
    }
    if (digitalRead(button2) == LOW) {
        Serial.println("2");
        delay(200);
    }
    if (digitalRead(button3) == LOW) {
        Serial.println("3");
        delay(200);
    }
    if (digitalRead(button4) == LOW) {
        Serial.println("4");
        delay(200);
    }
    if (digitalRead(button5) == LOW) {
        Serial.println("5");
        delay(200);
    }
    if (digitalRead(button6) == LOW) {
        Serial.println("6");
        delay(200);
    }
}
