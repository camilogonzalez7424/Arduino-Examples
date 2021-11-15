int LEDR = 11;  //Definimos las 3 salidas digitales PWM
int LEDG = 9;
int LEDB = 10;
void setup ()
{
 //Serial.begin(9600); //iniciamos comunicación para mostrar por pantalla la información recibida de la placa
 
 pinMode(LEDR,OUTPUT); // los pins digitales serán de salida
 pinMode(LEDG,OUTPUT);
 pinMode(LEDB,OUTPUT);
}

void loop()
{

 digitalWrite(LEDR, HIGH); // Como las entradas analógicas tienen una resolución máxima de 1024 estados y el PWM tiene una resolución de 256, tendremos que dividir el valor de la entrada
 //analógica entre 4 para hacer proporcional la lectura de la entrada analógica con la intensidad de salida de la salida digital PWM
 digitalWrite(LEDG, LOW);
 digitalWrite(LEDB, LOW);
 delay(3000);
  digitalWrite(LEDR, LOW); 
  digitalWrite(LEDG, HIGH);
 digitalWrite(LEDB, LOW);

  delay(3000);
  digitalWrite(LEDR, LOW); 
  digitalWrite(LEDG, LOW);
 digitalWrite(LEDB, HIGH);
   delay(3000);
   digitalWrite(LEDR, HIGH); 
  digitalWrite(LEDG, LOW);
 digitalWrite(LEDB, HIGH);
   delay(3000);
   digitalWrite(LEDR, LOW); 
  digitalWrite(LEDG, HIGH);
 digitalWrite(LEDB, HIGH);
   delay(3000);
   digitalWrite(LEDR, HIGH); 
  digitalWrite(LEDG, HIGH);
 digitalWrite(LEDB, HIGH);
   delay(3000);
   digitalWrite(LEDR, HIGH); 
  digitalWrite(LEDG, HIGH);
 digitalWrite(LEDB, LOW);
   delay(3000);
}
