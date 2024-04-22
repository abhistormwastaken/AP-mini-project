int Green=1;
int Blue =2;
int Red =4;
int Sign=3;
int cm=0;
long ultra(int Sign){
  pinMode(Sign,OUTPUT);
  digitalWrite(3,LOW);
  delayMicroseconds(5);
  digitalWrite(3,HIGH);
  delayMicroseconds(10);
  pinMode(Sign,INPUT);
  return pulseIn(Sign,HIGH);
}
void setup(){
  pinMode(Green,OUTPUT);
  pinMode(Red,OUTPUT);
}
void loop(){
  cm=(ultra(Sign)/2)*0.0343;
  if(cm>300){
     if(!digitalRead(Green)){
      digitalWrite(Red,LOW);}
    digitalWrite(Green,HIGH);}
  if(cm<300){
    if(!digitalRead(Red)){
      digitalWrite(Green,LOW);}
    digitalWrite(Red,HIGH);}
  delayMicroseconds(100);

}
    
