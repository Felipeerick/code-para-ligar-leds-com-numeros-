
/*Aluno: Felipe erick
data:03/11/2021 */
int led1 = 3, led2 = 4, led3 = 5; 
String texto;

//aluno: Felipe erick
//data 04/11/2021

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  while(Serial.available() > 0){
  String texto = Serial.readString();
    
    
            if ( (texto == "3") || (texto == "4") || (texto == "5") ){
             digitalWrite(texto.toInt(),HIGH);
            }else{
          
           digitalWrite(3, LOW);
                   digitalWrite(4, LOW);   
                       digitalWrite(5, LOW);
    }
  }                                                       
}
