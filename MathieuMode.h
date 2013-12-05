#include <Arduino.h>
#include "FastSPI_LED2.h"

class MathieuMode
{
  private:
    int count;
  public:
    MathieuMode( int pCount);
    void loop(CRGB *leds);
    void init();
};
