int brillo;
int LED1 = 3;
int LED2 = 5;
int LED3 = 6;

void setup() {
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT); 
pinMode(LED3,OUTPUT);  
}

void loop() {
  if (analogRead(A0)>=0 && analogRead(A0)<=341){  
  brillo=analogRead(A0)/4;
  analogWrite(LED1,brillo);
  }else if (analogRead(A0)>341 && analogRead(A0)<=682){  
  brillo=((analogRead(A0)/4)-85);
  analogWrite(LED2,brillo);       
  }else if (analogRead(A0)>682 && analogRead(A0)<1023){
  brillo=((analogRead(A0)/4)-170);
  analogWrite(LED3,brillo);
  }
}
