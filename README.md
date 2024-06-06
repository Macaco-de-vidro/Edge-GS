# Edge-GS

Instruções para o Controle da Esteira com Botão

Definição dos pinos:
Pino digital conectado ao botão: 2
Pino digital conectado ao motor da esteira: 3

Variáveis de estado:
Estado anterior do botão: LOW
Estado atual do botão: LOW
Estado do motor: LOW

Função setup():
Configura o pino do botão como entrada.
Configura o pino do motor como saída.

Função loop():
Lê o estado atual do botão.
Se houve uma mudança de estado no botão desde a última verificação:
Se o botão foi pressionado (estado HIGH), inverte o estado do motor.
Atualiza o estado anterior do botão.
Aguarda um pequeno intervalo de 50 milissegundos para evitar falsos positivos.

Como usar:
Carregue o código no Arduino.
Certifique-se de que todas as conexões estejam corretas.
Pressione o botão para ligar a esteira.
Pressione novamente o botão para desligar a esteira.

Nota:
Este projeto é uma demonstração simples de como controlar um motor usando um botão. Dependendo das especificações do seu motor e aplicação final, podem ser necessárias modificações no circuito e no código.

#Materiais:

Arduino (qualquer modelo compatível)
Botão (pode ser um botão de pressão normalmente aberto)
Motor para Esteira (certifique-se de que o motor seja compatível com a alimentação do Arduino)
