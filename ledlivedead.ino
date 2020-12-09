void setup() {
  pinMode (16, OUTPUT);
  pinMode (2, OUTPUT); 
  pinMode (5, OUTPUT);

}

void loop() {
  digitalWrite (16, HIGH);
  delay (1000);
  digitalWrite (16, LOW);
  
  
  digitalWrite (2, HIGH);
  delay (1000);
  digitalWrite(2, LOW);
  
 
  digitalWrite (5 , HIGH);
  delay (1000);
  digitalWrite (5, LOW);
  

}         
