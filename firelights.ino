#include <DmxSimple.h>

//light 1 - DMX CH 1

#define RED_CHANNEL 2
#define GRN_CHANNEL 3

//light 2 - DMX CH 10

#define RED_CHANNEL_B 11
#define GRN_CHANNEL_B 12

int DMX_dir = 4;
int LED2 = 8;

int redVals[] = {250, 225, 200, 175, 150, 125, 100, 075, 050, 025}; 

void setup() {
  pinMode(DMX_dir, OUTPUT);    
  pinMode(LED2, OUTPUT);       
  digitalWrite(DMX_dir, HIGH); 
  //skpang rev E + F, others use pin 3
  DmxSimple.usePin(2);
}

void loop() {  
  
  
    int arrayKey = random(9); 
    delay(1); 
    int arrayKeyB = random(9);
    int redVal = redVals[arrayKey]; 
    int grnVal = redVal/5;
    int redValB = redVals[arrayKeyB]; 
    int grnValB = redValB/5;
    DmxSimple.write(RED_CHANNEL, redVal);
    DmxSimple.write(GRN_CHANNEL, grnVal); 
    DmxSimple.write(RED_CHANNEL_B, redVal);
    DmxSimple.write(GRN_CHANNEL_B, grnVal);     
    delay(75);
    
}
