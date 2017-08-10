int ledg = 9; // verde
int ledb = 10; //azul
int ledr = 11; //rojo
char var;
bool b;
// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledr, OUTPUT);
  pinMode(ledg, OUTPUT);
  pinMode(ledb, OUTPUT);
  Serial.begin(9600);
  Apagar();
}

// the loop routine runs over and over again forever:
void loop() {
  if(Serial.available()){
    Serial.print("Disponible \n");
    var = Serial.read();
    Serial.print(var);
    if(var == 'a'){
      Serial.print("Random - Trabajando \n");
      b = true;
     while ( b == true){
      Aleatorio(random(255),random(255),random(255));
      delay(250);
      var = Serial.read();
      if(var == 'q'){
        Serial.print(var);
        Apagar();
        Serial.print("Finalizado \n");        
        b= false;
      }
     }
    }else if (var == 'b'){
      Serial.print("Strobo - Trabajando \n");
      b = true;
      while ( b == true){
        Strobo();   
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado \n");
            Apagar();
            Serial.print(var);
            b= false;
          }          
      }
    }else if (var == 'c'){
      Serial.print("Todos - Trabajando \n");
      b = true;
      while ( b == true){      
        Todos();
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado \n");
            Apagar();
            Serial.print(var);
            b= false;
          }
      }
    }else if (var == 'd'){
      Serial.print("Solidos - Trabajando \n");      
      b = true;
      while ( b == true){
        Solidos();    
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado");
            Apagar();
            Serial.print(var);
            b= false;
          }
      }        
    }

    else if (var == 'e'){
      Serial.print("Direccional - Trabajando \n");      
      b = true;
      while ( b == true){
        Direccional();    
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado");
            Apagar();
            Serial.print(var);
            b= false;
          }
      }        
    }

    else if (var == 'f'){
      Serial.print("Policia - Trabajando \n");      
      b = true;
      while ( b == true){
        Policia();    
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado");
            Apagar();
            Serial.print(var);
            b= false;
          }
      }        
    }

    else if (var == 'g'){
      Serial.print("Strobo blanco - Trabajando \n");      
      b = true;
      while ( b == true){
        StroboBlanco();    
        var = Serial.read();
        if(var == 'q'){
            Serial.print("Finalizado");
            Apagar();
            Serial.print(var);
            b= false;
          }
      }        
    }
    
  }
}

void Aleatorio(int R, int G, int B){
      analogWrite(9,G); // verde
      delay(250);
      analogWrite(10,B); // azul
      delay(250);
      analogWrite(11,R); // rojo
}

void Strobo(){ 
   /*delay(100);
   analogWrite(9,0); // verde
   analogWrite(10,0); // azul
   analogWrite(11,255); // rojo
   delay(1000);
   analogWrite(9,255); // verde
   analogWrite(10,0); // azul
   analogWrite(11,0); // rojo
   delay(1000);
   analogWrite(9,0); // verde
   analogWrite(10,255); // azul
   analogWrite(11,0); // rojo
   delay(1000);*/
   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,0); // rojo
   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(50); 

   delay(50);
   analogWrite(9,0); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(50);

   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,0); // azul
   analogWrite(11,255); // rojo
   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(50);
}

void Todos (){
   analogWrite(9,0); // verde
   analogWrite(10,0); // azul
   analogWrite(11,255); // rojo
}

void Solidos(){
  delay(100);
   analogWrite(11,255); // Red - Rojo
   analogWrite(9,0); // Green - Verde
   analogWrite(10,0); // Blue - Azul
   delay(500);
   analogWrite(11,0); // Red - Rojo
   analogWrite(9,255); // Green - Verde
   analogWrite(10,0); // Blue - Azul
   delay(500);
   analogWrite(11,0); // Red - Rojo
   analogWrite(9,0); // Green - Verde
   analogWrite(10,255); // Blue - Azul
  delay(500);
  
}

void Direccional(){ 
   analogWrite(9,181); // verde
   analogWrite(10,255); // azul
   analogWrite(11,70); // rojo
   delay(500);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(500);
}

void Policia(){
   analogWrite(9,255); // Green - Verde
   analogWrite(10,0); // Blue - Azul
   analogWrite(11,255); // Red - Rojo   
   delay(50);
   analogWrite(9,255); // Green - Verde
   analogWrite(10,255); // Blue - Azul
   analogWrite(11,255); // Red - Rojo
   delay(50);
   analogWrite(9,255); // Green - Verde
   analogWrite(10,0); // Blue - Azul
   analogWrite(11,255); // Red - Rojo
      
   analogWrite(9,255); // Green - Verde
   analogWrite(10,255); // Blue - Azul
   analogWrite(11,0); // Red - Rojo   
   delay(50);
   analogWrite(9,255); // Green - Verde
   analogWrite(10,255); // Blue - Azul
   analogWrite(11,255); // Red - Rojo
   delay(50);      
   analogWrite(9,255); // Green - Verde
   analogWrite(10,255); // Blue - Azul
   analogWrite(11,0); // Red - Rojo      
  
}

void StroboBlanco(){ 
   delay(50);
   analogWrite(9,0); // verde
   analogWrite(10,0); // azul
   analogWrite(11,0); // rojo
   delay(50);
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo
   delay(50);
}

void Blancos (){
   analogWrite(9,0); // verde
   analogWrite(10,0); // azul
   analogWrite(11,0); // rojo
}

void Apagar(){
   analogWrite(9,255); // verde
   analogWrite(10,255); // azul
   analogWrite(11,255); // rojo  
  }
