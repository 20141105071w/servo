void setup() {
  myservo.attach(9); 
  my.attach(5); // attaches the servo on pin 9 to the servo object
  my.attach(5); 
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {                                    
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    
    myservo.write(pos);              
    delay(15);                       
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(15);  
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    my.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
    for (pos = 0; pos <= 180; pos += 1) { 
   
    my.write(pos);              
    delay(15);                      
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    my.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15); // waits 15ms for the servo to reach the position
  for (pos = 180; pos >= 0; pos -= 1) { 
    my.write(pos);              
    delay(15); 
  }}  }
