const int buzzer = 7;
  
void setup(){
	pinMode(buzzer, OUTPUT);
  	pinMode(2, OUTPUT);
}
  
void loop(){
  	delay(500);
	tone(buzzer, 1000);
  	delay(500);
  	noTone(buzzer);
  	delay(1000);
  	tone(buzzer, 10);
 	delay(500);
  	noTone(buzzer);
  	delay(3000);
  	tone(buzzer, 1000);
  	delay(500);
  	noTone(buzzer);
  
  	digitalWrite(2, LOW); //Turns off -- digitalwrite to assign
  // HIGH or LOW value to pin.
  	delay(1000);
 	digitalWrite(2, HIGH);
  	delay(1000);
  
  
}
