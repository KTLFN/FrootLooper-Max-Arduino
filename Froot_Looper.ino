//FROOT LOOPER - Katie Laffan

void setup() {
  Serial.begin(9600); //Begin serial communication
}

void loop() {
  if (analogRead(A0) < 800) //if voltage less than 800 serial print ASCII
  {
   Serial.println(10);

    delay(80);
  }
  else if (analogRead(A1) < 800)
  {
    Serial.println(20);

    delay(80);
  }
  else if (analogRead(A2) < 800)
  {
    Serial.println(30);

    delay(80);
  }
  else if (analogRead(A3) < 800)
  {
    Serial.println(40);

    
    delay(80);
  }
    else if (analogRead(A4) < 800)
  {
    Serial.println(50);

    
    delay(80);
  }
    else if (analogRead(A5) < 800)
  {
    Serial.println(60);

    
    delay(80);
  }
} 
