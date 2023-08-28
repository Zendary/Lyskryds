#include <Arduino.h>
#include <SimpleLyskryds.h>

SimpleLyskryds lyskryds(D1, D2, D3, D5, D6, D7, (long[]){1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000});

void setup() 
{
  lyskryds.setup(millis());
}

void loop() 
{
  lyskryds.update(millis());
}