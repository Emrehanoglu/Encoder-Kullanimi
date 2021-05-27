 #define s1 7
 #define s2 6

 int sayac = 0; 
 int durum ;
 int sonDurum ; 
 
 void setup() { 
   pinMode (s1,INPUT);
   pinMode (s2,INPUT);
   
   Serial.begin (9600);
   sonDurum = digitalRead(s2);   
 } 

 void loop() { 
   durum = digitalRead(s2);
   if (durum != sonDurum){     
     if (digitalRead(s1) != durum) { 
       sayac ++;
     } else {
       sayac --;
     }
     Serial.print("Konum: ");
     Serial.println(sayac);
   } 
   sonDurum = durum;
 }
