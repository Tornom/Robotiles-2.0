int sensor[4] = {A0, A1, A2, A3};
int result[4];
int rele[4] = {2 , 3, 4, 5};

void setup() {
Serial.begin(9600);
pinMode(rele[0], OUTPUT);
pinMode(rele[1], OUTPUT);
pinMode(rele[2], OUTPUT);
pinMode(rele[3], OUTPUT);
pinMode(sensor[0], INPUT);
pinMode(sensor[1], INPUT);
pinMode(sensor[2], INPUT);
pinMode(sensor[3], INPUT);

}

void loop() {
for(int i = 0; i<4; i++)
{
  result[i] = analogRead(sensor[i]);
  if(result[i] >= 400 )
  {
    ativaRele(i);
  }
}
delay(201);
}                  
void ativaRele(int x)
{
  digitalWrite(rele[x], 1);
  delay(80);
  digitalWrite(rele[x], 0);
  delay(100);   
}
