int mesa1 = 34;
int mesa2 = 35;
int mesa3 = 32;
int mesa4 = 33;
int mesa5 = 25;
int reset = 33;


// Declarar pinos dos botões, leds e do display fora do void setup e loop pra serem globais.

void (*funcReset) () = 0;

void setup() {
  Serial.begin(115200);
  
  
  
  pinMode(mesa1, INPUT); // Chamar Mesa 1
  pinMode(mesa2, INPUT); // Chamar Mesa 2
  pinMode(mesa3, INPUT); // Chamar Mesa 3
  pinMode(mesa4, INPUT); // Chamar Mesa 4
  pinMode(mesa5, INPUT); // Chamar Mesa 5
  pinMode(reset, INPUT);
}

void loop() {
 
 

 if(digitalRead(mesa1) == 0){
   
   Serial.println("oi");
   

 } 
 
 if(digitalRead(mesa2) == 0){
   
    Serial.println("p");
    

 } 
 
 if(digitalRead(mesa3) == 0){
   
    Serial.println("o");
    
 }
 if(digitalRead(mesa4) == 0){
   
    Serial.println("u");
    
 }
 
 if(digitalRead(mesa5) == 0){
   
    Serial.println("t");
    
 }
 

 

}
