const int trigPin=21;
const int echoPin=20;
long duration;
float d,v;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  
}
void loop(){
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  d= duration*0.034/2;
  v=3.1416*49*(50-d);
  Serial.print("Vol= ");
  Serial.println((v-1000)/(1000));
  delay(1000);
}
