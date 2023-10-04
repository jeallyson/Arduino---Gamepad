/*
   Gamepad module provides three different mode namely Digital, JoyStick and Accerleometer.

   You can reduce the size of library compiled by enabling only those modules that you want to
   use. For this first define CUSTOM_SETTINGS followed by defining INCLUDE_modulename.

   Explore more on: https://thestempedia.com/docs/dabble/game-pad-module/
*/
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>
void setup() {

  Serial.begin(115200);      // Monitor Serial
  Dabble.begin(9600);        // taxa de transmissão do seu bluetooth

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  Dabble.processInput();    // //esta função é usada para atualizar os dados obtidos do smartphone. Portanto, chamar esta função é obrigatório para obter os dados corretamente do seu celular.
  Serial.print("KeyPressed: ");

  if (GamePad.isUpPressed())
  {
    Serial.print("UP"); // CIMA
        digitalWrite(4, HIGH); 
  } else {
    digitalWrite(4, LOW);
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("DOWN"); // BAIXO
           digitalWrite(6, HIGH); 
  } else {
    digitalWrite(6, LOW);
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left"); // ESQUERDA
           digitalWrite(3, HIGH); 
  } else {
    digitalWrite(3, LOW);
  }
  
  if (GamePad.isRightPressed())
  {
    Serial.print("Right"); // DIREITA
               digitalWrite(5, HIGH); 
  } else {
    digitalWrite(5, LOW);
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square"); // Quadrado
    digitalWrite(9, HIGH); 
  } else {
    digitalWrite(9, LOW);
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle"); // CIRCULO
    digitalWrite(11, HIGH); 
  } else {
    digitalWrite(11, LOW);
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross"); // BOL
     digitalWrite(12, HIGH); 
  } else {
    digitalWrite(12, LOW);
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle"); // TRIANGULO
     digitalWrite(10, HIGH); 
  } else {
    digitalWrite(10, LOW);
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start"); // INICIAR
     digitalWrite(8, HIGH); 
  } else {
    digitalWrite(8, LOW);
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");  // SELECIONAR
     digitalWrite(7, HIGH); 
  } else {
    digitalWrite(7, LOW);
  }
  Serial.print('\t');

  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
  Serial.println();
}
