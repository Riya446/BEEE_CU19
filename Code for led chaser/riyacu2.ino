int pinscount=4;
int pins[]={10,11,12,13};
void setup() 
{
  for(int i=0;i<pinscount;i=i+1)
  {
    pinMode(pins[i], OUTPUT);
  }
}
void loop()
{
  for(int i=0;i<pinscount;i=i+1)
  {
    digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
   }
   
for(int i=pinscount-1;i>0;i=i+1)
{
digitalWrite(pins[i], HIGH);
    delay(100);
    digitalWrite(pins[i], LOW);
  

}
}
