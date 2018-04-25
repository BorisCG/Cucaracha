char nombre[10] = "Garrapata";
char password[10] = "1234";
char baud = '4';
int a = 13;
int b = 14;
int c = 15;
int d = 16;

void setup()
{
  Serial.begin(9600);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}

void loop() {
  if (Serial.available() >= 1)
  {
    char entrada = Serial.read();

    if (entrada == 'F')
    {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      Serial.println("Adelante");
    }
    else if (entrada == 'B')
    {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      Serial.println("Atras");
    }
    else if (entrada == 'R')
    {
      digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      Serial.println("Derecha");
    }
    else if (entrada == 'L')
    {
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      Serial.println("Izquierda");
    }
  }
}
