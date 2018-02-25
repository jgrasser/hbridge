/*
 * Project hbridge
 * Description: Create H-Bridge Motor Controller using Particle Relay Shield
 * Author: Joseph Grasser
 * Date: 2/25/2018
 */

int RELAY1 = D3;
int RELAY2 = D4;
int RELAY3 = D5;
int RELAY4 = D6;
int BUTTON = D1;

void setup()
{
    //Initilize the relay control pins as output
    pinMode(RELAY1, OUTPUT);
    pinMode(RELAY2, OUTPUT);
    pinMode(RELAY3, OUTPUT);
    pinMode(RELAY4, OUTPUT);
    pinMode(BUTTON, INPUT_PULLUP);  

    // Initialize all relays to an OFF state
    digitalWrite(RELAY1, LOW);
    digitalWrite(RELAY2, LOW);
    digitalWrite(RELAY3, LOW);
    digitalWrite(RELAY4, LOW);
}

void loop()
{
    if (digitalRead(BUTTON) == LOW)
    {
        digitalWrite(RELAY1, HIGH);
        digitalWrite(RELAY2, LOW);
    }
    else{
        digitalWrite(RELAY1, LOW);
        digitalWrite(RELAY2, HIGH);
    }
}
