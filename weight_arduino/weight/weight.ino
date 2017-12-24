#include"HX711.h"
int Weight = 0;
void setup() {
   Init_Hx711();
   Get_Maopi();   //clear the weight 
   Serial.begin(9600);  
}
 
void loop() {     
 while(1){
    Weight = Get_Weight();
    Serial.println(Weight);
 }
}
