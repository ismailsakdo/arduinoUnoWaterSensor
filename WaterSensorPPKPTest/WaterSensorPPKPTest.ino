float waterL;

void setup()
{
  Serial.begin(9600);
  Serial.flush();
  while(Serial.available()>0)Serial.read();

  pinMode(A0, INPUT);
}


void loop()
{

    waterL = analogRead(A0);
    Serial.println(waterL);
    delay(1000);

}
