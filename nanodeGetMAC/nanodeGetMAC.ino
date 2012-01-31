
#include <NanodeMAC.h>

static uint8_t mymac[6] = { 
  0,0,0,0,0,0 };
NanodeMAC mac( mymac );

void setup(){
  
  Serial.begin(9600);
  
  Serial.println("this Nanode MAC Address is: ");
  Serial.print("{ ");
  for(int i=0; i<7; i++){
    Serial.print("0x");
    Serial.print(mymac[i], HEX);
    Serial.print(", ");
  }
  Serial.print("}");
}

void loop(){

}

