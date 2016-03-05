#include "LedControl.h" //  need the library
LedControl lc=LedControl(14,13,12,1); // NodeMCU Pins: D5 = 14, D6=12, D7=13

// pin 14 is connected to the MAX7219 pin 1 (DIN)
// pin 13 is connected to the CLK pin 13
// pin 12 is connected to LOAD pin 12 (CS)
// 1 as we are only using 1 MAX7219

void setup()
{
  // the zero refers to the MAX7219 number, it is zero for 1 chip
  lc.shutdown(0,false);// turn off power saving, enables display
  lc.setIntensity(0,8);// sets brightness (0~15 possible values)
  lc.clearDisplay(0);// clear screen
}
void loop()
{
  for (int row=0; row<8; row++)
  {
    for (int col=0; col<8; col++)
    {
      lc.setLed(0,col,row,true); // turns on LED at col, row
      delay(25);
    }
  }

  for (int row=0; row<8; row++)
  {
    for (int col=0; col<8; col++)
    {
      lc.setLed(0,col,row,false); // turns off LED at col, row
      delay(25);
    }
  }
}
