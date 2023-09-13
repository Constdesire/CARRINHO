void setup()
{

 

  Serial.begin(9600);

 

  // Define os pinos de controle do motor como saída

 

  // Motor 1

 

  pinMode(5, OUTPUT); // saída A-

 

  pinMode(0, OUTPUT); // saída A+

 

  // Motor 2

 

  pinMode(4, OUTPUT); // saída B-

 

  pinMode(2, OUTPUT); // saída B+

 

}

 

 

void loop()

 

{

 

  // Move o carrinho para frente

 

  // Aciona motor 1

 

 

analogWrite(5, 512);

 

digitalWrite(0, HIGH);

 

// Aciona motor 2 na mesma direção

 

analogWrite(4, 512);

 

digitalWrite(2, HIGH);

 

// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

 

delay(2000);

 

 

 

 

 

  // Move o carrinho para a direita

 

  // Aciona motor 1

 

  analogWrite(5, 1024);

 

  digitalWrite(0, HIGH);

 

  // Aciona motor 2

 

  analogWrite(4, 0); // Desliga o motor 2

 

  // Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

 

  delay(2000);

 

 

// Move o carrinho para trás

 

  // Aciona motor 1

digitalWrite(4, 500);

 

digitalWrite(0, HIGH);

 

// Aciona motor 2 na mesma direção

 

digitalWrite(5, 500);

 

digitalWrite(2, HIGH);

 

// Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

 

delay(2000);


 

  // Move o carrinho para a esquerda

 

  // Aciona motor 1

 

  analogWrite(5, 0); // Desliga o motor 1

 

  // Aciona motor 2

 

  analogWrite(4, 1024);

 

  digitalWrite(2, HIGH);

 

  // Aguarda por um tempo (você pode ajustar o tempo conforme necessário)

 

  delay(2000);

 

}
