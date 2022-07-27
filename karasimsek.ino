
int ledler[]={2,3,4,5,6};


void setup() {
  // put your setup code here, to run once:
for(int i=0;i<5;i++)
{
  pinMode(ledler[i],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++){
    digitalWrite(ledler[i],HIGH);
    delay(100);
    digitalWrite(ledler[i],LOW);
  }

  for(int j=4; j>-1;j--){
    digitalWrite(ledler[j],HIGH);
    delay(100);
    digitalWrite(ledler[j],LOW);
  }


}
