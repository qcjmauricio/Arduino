//incluir librerias

//declarar variables
byte pinLed1 = 2;
byte pinLed2 = 3;
byte pinLed3 = 4;
int tiempo = 100;// 100 milisegundos
boolean estadoA =false;
boolean estadoB =false;
boolean estadoC =false;
char inChar;
void setup(){//inicializa el estado y configuraciones de arduino 
  Serial.begin(9600);// Inicia comunicacion serial con una velocidad de 9600
  for(byte i = 2; i < 5; i++){//bucle para inicializar como salidas y en estado bajo los pines 2-4
     pinMode(i,OUTPUT);
     digitalWrite(i,LOW);
  }
 
}
void loop(){//bucle infinito 
  
   for(int brillo = 0; brillo < 256; brillo++){// bucle for para pin pwm le da un efecto de desvanecimiento acendente
    analogWrite(pinLed2,brillo);
    delay(5);
   }
   for(int brillo = 255; brillo >= 0; brillo--){// bucle for para pin pwm le da un efecto de desvanecimiento decendente
    analogWrite(pinLed2,brillo);
    delay(5);
   }
  
  while(Serial.available()){// bucle while para recibir todos los datos por el puerto serial 
     inChar = (char)Serial.read();// almacenamos en un avariable tipo char todos los datos recibidos y lo convertimos en char
     switch(inChar){//condicional para diferenciar el dato enviado por comunicacion serial 
      case 'a':
         estadoA = onOffLed(estadoA,pinLed1);//ejecutamos la funcion onOffLed y almacenamos el dato retornado en la variable "estadoA"
        break;
      case 'b':
          estadoB = onOffLed(estadoB,pinLed2);//ejecutamos la funcion onOffLed y almacenamos el dato retornado en la variable "estadoB"
        break;
      case 'c':
          estadoC = onOffLed(estadoC,pinLed3);//ejecutamos la funcion onOffLed y almacenamos el dato retornado en la variable "estadoC"
        break;
      default:
        
        break;
     }
    
  }
 /* 
  *Descomenta para ejecutar la funcion onLed 
  */
 //onLed(pinLed1,pinLed2);
 /*
  * Descomenta para parpadeo General  
  */
  //parpadeoGral();

 /*parpadeo(pinLed1);
 parpadeo(pinLed2);
 parpadeo(pinLed3);
 delay(500);
 parpadeoGral();
 delay(500);
 parpadeo(pinLed3);
 parpadeo(pinLed2);
 parpadeo(pinLed1);
 delay(500);
 parpadeoGral();
 delay(500);*/
 
}
//funciones
int onOffLed(boolean estado, byte pin){//funcion int recibe dos parametros (estado del pin , pin para dar cambios)
   if(estado == false){
    digitalWrite(pin,HIGH);
    estado = true;
    }else{
      if(estado == true){
        digitalWrite(pin,LOW);
        estado =false;
        }
      }
  return estado;
}

int onLed(byte pinOn, byte pinOff){//funcion int recibe dos parametros (pin encender, pin apagar)
  digitalWrite(pinOn,HIGH);
  digitalWrite(pinOff,LOW);
  Serial.print("El led ");
  Serial.print (pinOn);
  Serial.println(" se encendio!!!");
  Serial.print("El led ");
  Serial.print (pinOff);
  Serial.println(" se apago!!!");

}
void juegoLed(){//funcion void no recibe parametros enciende los leds en forma decendente y retorna 
  for(byte i = 2; i < 5; i++){
     digitalWrite(i,HIGH);
     delay(tiempo);
     digitalWrite(i,LOW);
  }
  delay(tiempo);
  for(byte i = 4; i > 1; i--){
     digitalWrite(i,HIGH);
     delay(tiempo);
     digitalWrite(i,LOW);
  }
  delay(tiempo);
}
void parpadeoGral(){//funcion void no recibe parametros enciende todos los leds espera el tiempo declarado y apaga todos los leds
  for(byte i = 2; i < 5; i++){
     digitalWrite(i,HIGH);
  }
  delay(tiempo);
  for(byte i = 2; i < 5; i++){
     digitalWrite(i,LOW);
  }
  delay(tiempo);
}
int parpadeo(byte pin){//funcion int recibe un paramtro el pin a encender y apagar
  digitalWrite(pin,HIGH);
  delay(tiempo);
  digitalWrite(pin,LOW);
  delay(tiempo);
}
