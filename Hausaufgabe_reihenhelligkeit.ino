int d=5;
void setup() 
{
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
}

void loop() 
{
for ( int a =0;a<256;a++)
{
  analogWrite(2,a);
  delay(d);
  analogWrite(3,a);
  delay(d);
  analogWrite(4,a);
  delay(d);
  analogWrite(5,a);
  delay(d);
  analogWrite(6,a);
  delay(d);
}
for ( int a=255;a>=0;a--)
{
  analogWrite(2,a);
  delay(d);
  analogWrite(3,a);
  delay(d);
  analogWrite(4,a);
  delay(d);
  analogWrite(5,a);
  delay(d);
  analogWrite(6,a);
  delay(d);
}
delay(200);
}
