void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
int income;

void loop()
{
  if(Serial.available()>0)
{
    income=Serial.read();
  }
  switch(income)
  {
    case '0':
    	out0();
    break;
        case '1':
    	out1();
    break;
        case '2':
    	out2();
    break;
        case '3':
    	out3();
    break;
        case '4':
    	out4();
    break;
        case '5':
    	out5();
    break;
        case '6':
    	out6();
    break;
        case '7':
    	out7();
    break;
        case '8':
    	out8();
    break;
        case '9':
    	out9();
    break;
    defauit:break;
  }
}
void out0()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out1()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out2()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(1, LOW);
  delay(10);
}
void out3()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(1, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out4()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out5()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out6()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out7()
{
  digitalWrite(4, LOW);
  delay(10);
  digitalWrite(3, HIGH);
  delay(10);
  digitalWrite(2, HIGH);
  delay(10);
  digitalWrite(1, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out8()
{
  digitalWrite(4, HIGH);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, LOW);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}
void out9()
{
  digitalWrite(4, HIGH);
  delay(10);
  digitalWrite(3, LOW);
  delay(10);
  digitalWrite(2, LOW);
  delay(10);
  digitalWrite(1, HIGH);
  delay(10);
  digitalWrite(5, LOW);
  delay(10);
}