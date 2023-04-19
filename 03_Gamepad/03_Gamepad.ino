#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);      // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin(9600);        //Enter baudrate of your bluetooth.Connect bluetooth on Bluetooth port present on evive.
  // Declarando var como saídas
  pinMode(3, OUTPUT);
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
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("UP"); // PULAR
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
    Serial.print("Square");
    digitalWrite(9, HIGH); 
  } else {
    digitalWrite(9, LOW);
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
    digitalWrite(11, HIGH); 
  } else {
    digitalWrite(11, LOW);
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
     digitalWrite(12, HIGH); 
  } else {
    digitalWrite(12, LOW);
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
     digitalWrite(10, HIGH); 
  } else {
    digitalWrite(10, LOW);
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
     digitalWrite(8, HIGH); 
  } else {
    digitalWrite(8, LOW);
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
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
