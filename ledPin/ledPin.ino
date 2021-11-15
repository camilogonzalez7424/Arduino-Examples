int ledPin = 10;
int delay1 = 200;
int kedPin = 10; //Slida LED en PIN 10
byte parpadeo[] = {1023,30,1000,200,10,900,150,960};

void setup()
{
  pinMode(ledPin,OUTPUT);  
}
void loop(){
  for(int i = 0; i<8;i++)
  {
   analogWrite(ledPin,parpadeo[i]);
   delay(delay1);
  }
}
