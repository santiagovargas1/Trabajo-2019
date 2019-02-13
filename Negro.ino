const int trigpin = 3;
const int eco = 2;
int led1 = 5;
int led2 = 7;
int led3 = 9;
int led4 = 11;

long duration;
int distance;

void setup(){
  pinMode(trigpin, OUTPUT);
  pinMode(eco, INPUT);

  Serial.begin(9600);
}
void loop() {
 digitalWrite(trigpin, LOW);
 delayMicroseconds(2);
 
 digitalWrite(trigpin, HIGH);
delayMicroseconds(10);
digitalWrite(trigpin, LOW);

duration = pulseIn(eco, HIGH);

distance = 0.034 * duration / 2;
 if(distance < 50){
  digitalWrite(led1 ,HIGH);
 if(distance < 40){
  digitalWrite( led2 ,HIGH);
 }
  else(distance > 40);{
    digitalWrite(distance, LOW);
  }
 }
 if(distance < 30){
  digitalWrite(led3, HIGH);
 }
  else(distance > 30);{
    digitalWrite(led3, LOW);
  
  }
 }
 if(distance < 20){
  digitalWrite(led4, HIGH);
 }
 }else(distance > 50);{
 digitalWrite(led1, LOW);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);
 
 }
Serial.print("distancia:");
Serial.println(distance);

}
