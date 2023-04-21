int LED =2;
int BUTTON1 =4;
int BUTTON2 =5;

void setup() 
{
  pinMode(LED,OUTPUT);
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
}

void loop() 
{
  if(digitalRead(BUTTON1) == HIGH)
  {
  digitalWrite(LED,HIGH);
  }
  if(digitalRead(BUTTON2) == HIGH)
  {
  digitalWrite(LED,LOW);
  }
}
