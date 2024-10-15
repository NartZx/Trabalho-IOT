int mesa1 = 34;
int mesa2 = 35;
int mesa3 = 32;
int mesa4 = 33;
int mesa5 = 25;



// Declarar pinos dos botões, leds e do display fora do void setup e loop pra serem globais.


void setup() {
  Serial.begin(115200);
  
  
  
  pinMode(mesa1, INPUT); // Chamar Mesa 1
  pinMode(mesa2, INPUT); // Chamar Mesa 2
  pinMode(mesa3, INPUT); // Chamar Mesa 3
  pinMode(mesa4, INPUT); // Chamar Mesa 4
  pinMode(mesa5, INPUT); // Chamar Mesa 5
 
}

void loop() {
 if(Serial.available() > 0){ 
   char letra = Serial.read();
  
  switch(letra) {             // Colocar um argumento depois real
   
     case '1':
     
       digitalWrite(mesa1,1);
       Serial.println('1');
       
     
       break;
    
  
      case '2':
    
       digitalWrite(mesa2,1);
       Serial.println('2');
       
       break;
    
     
      case '3':
     
       digitalWrite(mesa3,1);
       Serial.println('3');
       
       break;
     
      
      case '4':
     
       digitalWrite(mesa4,1);
       Serial.println('4');
       
       break;
     
    
      case '5':
      
       digitalWrite(mesa5,1);
       Serial.println('5');
       
       break;
      
   }
  } else{
   
  }

}
