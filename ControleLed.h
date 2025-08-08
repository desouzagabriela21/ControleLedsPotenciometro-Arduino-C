// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  int potenciometro1 = analogRead(A0);
  int potenciometro2 = analogRead(A1);
  
  if (potenciometro1 >= 0 && potenciometro1 < 164){
  digitalWrite(7, HIGH);
  } else {
  digitalWrite(7, LOW);
  }
  
  if (potenciometro1 >= 164 && potenciometro1 < 511){
  digitalWrite(6, HIGH);
  } else {
  digitalWrite(6, LOW);
  }
  
  if (potenciometro1 >= 511 && potenciometro1 < 859){
  digitalWrite(5, HIGH);
  } else {
  digitalWrite(5, LOW);
  }
  
  if (potenciometro1 >= 859 && potenciometro1 <= 1023){
  digitalWrite(4, HIGH);
  } else {
  digitalWrite(4, LOW);
  }  
                                  
  Serial.println(potenciometro1);
  //Serial.println(potenciometro2);

}
