int pinSensor = 8;
int valorSensor = 0;
char saidaSerial = 'O';
void setup() {
  Serial.begin(9600); //Inicializando o serial monitor
 
  //Definido pinos como de entrada ou de saída
  pinMode(pinSensor,INPUT);

}

void loop() {
  
  valorSensor = digitalRead(pinSensor);
  Serial.println(saidaSerial);

  if (valorSensor == 1) {
    saidaSerial = 'X';
  } else {
    saidaSerial = 'O';
  }
}
