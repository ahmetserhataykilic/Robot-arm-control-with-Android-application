#include <Servo.h>

Servo servo1; // servonun harekti için 
Servo servo2; // servonun harekti için 
Servo servo3; // servonun harekti için 
Servo servo4; // servonun harekti için 


signed int pos1,pos2,pos3,pos4;
char gelenVeri;

void setup() {
  Serial.begin(9600);

  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);

  pos1=90;
  servo1.write(pos1);
  pos2=30;
  servo2.write(pos2);
  pos3=120;
  servo3.write(pos3);
  pos4=30;
  servo4.write(pos4);
    
}

void loop() {
  while (Serial.available() > 0) { /* Yeni veri var mı */

    
    gelenVeri = Serial.read(); /* Yeni veriyi okunanKarakter degiskenine kaydet */
    switch (gelenVeri) 
      { /* Okunan karaktere göre işlem yap */
      ///////////////////////////SAĞA SOLA DÖNME////////////////////////////
      case 'D':
        {
        
          pos1++;
          servo1.write(pos1);
          if(pos1 >= 180)pos1=180;
          delay(15);     
        }
        break;

      case 'A':
        {
          pos1--;
          servo1.write(pos1);
          if(pos1 <= 0)pos1=0;
          delay(15);       
        }
        break; 
      ///////////////////////////1.KOL İLERİ GERİ////////////////////////////
      case 'W':
        {
          pos2--;
          servo2.write(pos2);
          if(pos2 <= 0)pos2=0;
          delay(15);       
        }
        break; 
      case 'S':
        {
          pos2++;
          servo2.write(pos2);
          if(pos2 >= 180)pos2=180;
          delay(15);    
        }
        break; 
      ///////////////////////////2.KOL İLERİ GERİ////////////////////////////
      case 'T':
        {
          pos3++;
          servo3.write(pos3);
          if(pos3 >= 180)pos3=180;
          delay(15);    
        }
        break;
      case 'G':
        {
          pos3--;
          servo3.write(pos3);
          if(pos3 <= 0)pos3=0;
          delay(15);  
        }
        break;
      ///////////////////////////AĞZI AÇ KAPAT////////////////////////////
      case 'H':
        {
          pos4--;
          servo4.write(pos4);
          if(pos4 <= 0)pos4=0;
          delay(15);  
        }
        break;
      case 'F':
        {
          pos4++;
          servo4.write(pos4);
          if(pos4 >= 180)pos4=180;
          delay(15);    
        }
        break;
        
            
        default:
        break;
      
      
      
      
      
     




        
    }}}
