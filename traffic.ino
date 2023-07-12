#define tlRed 25
#define tlYellow 26
#define tlGreen 27
#define tlRed2 13
#define tlYellow2 12
#define tlGreen2 14
#define one 15
#define center 5
#define topleft 23
#define top 22
#define topright 19
#define bottomleft 2
#define bottom 4
#define bottomright 18

void setup() {
  pinMode(tlRed, OUTPUT);
  pinMode(tlYellow, OUTPUT);
  pinMode(tlGreen, OUTPUT);
  pinMode(tlGreen2, OUTPUT);
  pinMode(tlRed2, OUTPUT);
  pinMode(tlYellow2, OUTPUT);
  pinMode(one, OUTPUT);
  pinMode(center, OUTPUT);
  pinMode(top, OUTPUT);
  pinMode(bottom, OUTPUT);
  pinMode(topleft, OUTPUT);
  pinMode(topright, OUTPUT);
  pinMode(bottomleft, OUTPUT);
   pinMode(bottomright, OUTPUT);

  xTaskCreatePinnedToCore(Task1code, "Task1", 10000, NULL, 1, NULL, 0);    
    delay(500); 
  xTaskCreatePinnedToCore(Task2code, "Task2", 10000, NULL, 2, NULL, 1); 
    delay(500);

}

void Task1code( void * pvParameters ){
  Serial.print("Lights running on core ");
  Serial.println(xPortGetCoreID());

  for(;;){
  digitalWrite(tlRed, HIGH);                     
  digitalWrite(tlYellow, LOW);    
  digitalWrite(tlGreen, LOW);                     
  digitalWrite(tlRed2, LOW);    
  digitalWrite(tlYellow2, LOW);    
  digitalWrite(tlGreen2, HIGH);  
  delay(10000);              
  digitalWrite(tlRed, HIGH);                     
  digitalWrite(tlGreen, LOW);                     
  digitalWrite(tlRed2, LOW);  
  digitalWrite(tlYellow, LOW);    
  digitalWrite(tlYellow2, HIGH);  
  digitalWrite(tlGreen2, HIGH);  
  delay(5000);   
  digitalWrite(tlRed, LOW);                     
  digitalWrite(tlYellow, LOW);    
  digitalWrite(tlGreen, HIGH);                     
  digitalWrite(tlRed2, HIGH);    
  digitalWrite(tlYellow2, LOW);    
  digitalWrite(tlGreen2, LOW);   
  delay(10000);     
    digitalWrite(tlRed, LOW);                     
  digitalWrite(tlYellow, HIGH);    
  digitalWrite(tlGreen, HIGH);                     
  digitalWrite(tlRed2, HIGH);    
  digitalWrite(tlYellow2, LOW);    
  digitalWrite(tlGreen2, LOW);  
  delay(5000);      
  } 


}

void Task2code( void * pvParameters ){
  Serial.print("Timer running on core ");
  Serial.println(xPortGetCoreID());
 
  for(;;){
      digitalWrite(one, HIGH);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, LOW); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);
  digitalWrite(one, HIGH);                     
  digitalWrite(top, LOW);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, LOW); 
  delay(1000);               
  digitalWrite(one, HIGH);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);   
    digitalWrite(one, HIGH);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, HIGH); 
  digitalWrite(bottomright, LOW); 
  digitalWrite(bottom, HIGH); 
  delay(1000);                
    digitalWrite(one, HIGH);                     
  digitalWrite(top, LOW);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, LOW); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, LOW); 
  delay(1000);   
      digitalWrite(one, HIGH);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, LOW); 
  digitalWrite(bottomleft, HIGH); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);   
    digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);       
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, HIGH); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);              
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, LOW); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, LOW); 
  delay(1000);        
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, LOW); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, HIGH); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);       
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, LOW); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH); 
  delay(1000);                
      digitalWrite(one, LOW);                     
  digitalWrite(top, LOW);    
  digitalWrite(topleft, HIGH); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, LOW); 
  delay(1000);
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, HIGH);                 
  delay(1000);   
      digitalWrite(one, LOW);                     
  digitalWrite(top, HIGH);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, HIGH); 
  digitalWrite(bottomleft, HIGH); 
  digitalWrite(bottomright, LOW); 
  digitalWrite(bottom, HIGH); 
  delay(1000);                  
      digitalWrite(one, LOW);                     
  digitalWrite(top, LOW);    
  digitalWrite(topleft, LOW); 
  digitalWrite(topright, HIGH); 
  digitalWrite(center, LOW); 
  digitalWrite(bottomleft, LOW); 
  digitalWrite(bottomright, HIGH); 
  digitalWrite(bottom, LOW); 
  delay(1000);         
    
  } 


}

void loop(){}

