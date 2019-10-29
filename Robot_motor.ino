int motorpin = 3;

void setup()
{
  pinMode (motorpin, OUTPUT);
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Speed 0 to 255");
  
}

void loop()
{
  if (Serial.available())
  {
    int speed = 250; //Serial.parseInt();
    if (speed >=0 &&speed <=255)
    {
      analogWrite(motorpin, speed);
      Serial.println("motor speed is " + speed);
      if (speed = 0)
      {
        exit;
      
      }
    }
  }
}
