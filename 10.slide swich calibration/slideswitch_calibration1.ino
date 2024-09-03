// C++ code
//
void setup()
{
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int t=digitalRead(4);
  Serial.println(t);
}