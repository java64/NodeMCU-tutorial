/* Tutorial de programacion en ESP
 *  
 *  Hello ESP
 *  
 *  by @javacasm
 */

void setup() {
  // LED_BUILTIN Constante definida en cada placa
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN,LOW); 
  delay(1000);
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);
}
