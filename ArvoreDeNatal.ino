#define LED1 12
#define LED2 11
#define LED3 10
#define LED4 9
#define LED5 8
#define LED6 7 
#define LED7 6
#define LED8 5
#define LED9 4

int i = 0;
int modo = 0;

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
  pinMode(LED9,OUTPUT);
}

void modo1(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, HIGH);
  delay(3000);
}

void modo2(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(3000);
}

void modo3(){
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, HIGH);
  delay(500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, HIGH);
  delay(500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, HIGH);
  delay(500);
 }

void modo4(){
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
  digitalWrite(LED6, LOW);
  digitalWrite(LED7, LOW);
  digitalWrite(LED8, LOW);
  digitalWrite(LED9, LOW);
  delay(500);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED6, HIGH);
  digitalWrite(LED7, HIGH);
  digitalWrite(LED8, HIGH);
  digitalWrite(LED9, HIGH);
  delay(500);
}

void modo5(){

}

void modo6(){

}

void modo7(){

}

void modo8(){

}

void modo9(){

}

void loop(){
 
  modo = random(1,10);
  
  if (modo == 1) {
   modo1();
  }
  
  if (modo == 2) {
   modo2();
  }
  
  if (modo == 3) {
    for(i=0;i<3;i+=1){
        modo3();
    }
  }
  
  if (modo == 4) {
    for(i=0;i<5;i+=1){
        modo4();
    }
  }
}