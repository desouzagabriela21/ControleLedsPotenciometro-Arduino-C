# Controle de LEDs com Potenciômetro usando Arduino Uno R3

Desenvolvido na aula de programação de sistemas embarcados do curso técnico em IoT SENAI.

Componentes:
Arduino Uno R3

1 Potenciômetro (conectado na entrada analógica A0)

4 Resistores (para limitar corrente dos LEDs)

4 LEDs (conectados nos pinos digitais 4, 5, 6 e 7)

Protoboard e cabos jumper

Descrição do Projeto:
Este projeto utiliza um potenciômetro para controlar a ativação de quatro LEDs ligados ao Arduino Uno R3. O valor lido no potenciômetro (na porta analógica A0) determina qual LED será aceso, dividindo a faixa de leitura analógica (0 a 1023) em quatro intervalos:

0 a 163: LED conectado ao pino 7 aceso

164 a 510: LED no pino 6 aceso

511 a 858: LED no pino 5 aceso

859 a 1023: LED no pino 4 aceso

Dessa forma, conforme o usuário gira o potenciômetro, o LED correspondente ao intervalo em que o valor está será aceso, oferecendo uma forma simples de indicação visual do valor do potenciômetro.

<img width="1228" height="691" alt="ControleLeds" src="https://github.com/user-attachments/assets/f367e325-bbc5-4437-b42c-0e634b18e755" />
