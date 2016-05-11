//#include <Arduino.h>
/* Pines

Conectados al NodeMCU
D0
D5
D6
D7
D8

PWMA  D1 5
PWMB  D2 4
DA    D3 0
DB    D4 2
*/
/*
#define PWMA 5
#define PWMB 4
#define DA  0
#define DB  2
#define D_FORWARD 0
#define D_BACKWARD 1


void setup()
{
pinMode(DA,OUTPUT);
pinMode(DB,OUTPUT);

Serial.begin(9600);
}

void loop()
{

digitalWrite(DA,D_FORWARD);
digitalWrite(DB,D_FORWARD);

for(int i=0;i<256;i++)
{
    analogWrite(PWMA,i);
    analogWrite(PWMB,i);
    delay(100);
    Serial.println(i);
}

for(int i=256;i>=0;i--)
{
    analogWrite(PWMA,i);
    analogWrite(PWMB,i);
    delay(100);
    Serial.println(i);
}

digitalWrite(DA,D_BACKWARD);
digitalWrite(DB,D_BACKWARD);

for(int i=0;i<256;i++)
{
    analogWrite(PWMA,i);
    analogWrite(PWMB,i);
    delay(100);
    Serial.println(i);
}

for(int i=256;i>=0;i--)
{
    analogWrite(PWMA,i);
    analogWrite(PWMB,i);
    delay(100);
    Serial.println(i);
}

}
*/
