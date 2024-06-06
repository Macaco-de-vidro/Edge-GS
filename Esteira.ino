// Definindo os pinos para o botão e o motor da esteira
const int buttonPin = 2; // Pino digital conectado ao botão
const int motorPin = 3; // Pino digital conectado ao motor da esteira

// Variável para armazenar o estado anterior do botão
int previousButtonState = LOW;
// Variável para armazenar o estado atual do botão
int buttonState = LOW;
// Variável para armazenar o estado do motor
int motorState = LOW;

void setup() {
  // Inicializando o pino do botão como entrada
  pinMode(buttonPin, INPUT);
  // Inicializando o pino do motor como saída
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Lendo o estado atual do botão
  buttonState = digitalRead(buttonPin);

  // Verificando se houve uma mudança de estado no botão
  if (buttonState != previousButtonState) {
    // Se houve uma mudança, inverte o estado do motor
    if (buttonState == HIGH) {
      motorState = !motorState;
      digitalWrite(motorPin, motorState);
    }
    // Atualiza o estado anterior do botão
    previousButtonState = buttonState;
    // Aguarda um pequeno intervalo para evitar falsos positivos
    delay(50);
  }
}