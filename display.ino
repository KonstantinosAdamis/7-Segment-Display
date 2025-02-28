// C++ code
//

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int slideSwitch1 = 5;
const int slideSwitch2 = 6;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(slideSwitch1, INPUT);
  pinMode(slideSwitch2, INPUT);
}

void loop()
{
  int slideSwitch1State = digitalRead(slideSwitch1);
  int slideSwitch2State = digitalRead(slideSwitch2);
  
  if (slideSwitch1State ==  slideSwitch2State){
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, LOW);
  }
  else if (slideSwitch1State > slideSwitch2State){
    
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
  }
  else{
    
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
    
  }
  
}