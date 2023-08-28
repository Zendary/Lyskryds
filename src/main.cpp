#include <Arduino.h>
#include <SimpleLyskryds.h>

SimpleLyskryds lyskryds(D1, D2, D3, D5, D6, D7, (long[]){1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000});
//d1 rød, d2 gul, d3 grøn, d5 rød, d6 gul, d7 grøn

void setup() 
{
  lyskryds.setup(millis());
}

void loop() 
{
  lyskryds.update(millis());
}