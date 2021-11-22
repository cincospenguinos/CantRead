#include <Watchy.h>
#include <block_calculator.h>

class CantRead : public Watchy {
public:
  void drawWatchFace();
private:
  void drawNumber(BlockCalculator &calculator, int16_t sector);
  void drawBlockAt(int16_t sector, int16_t x, int16_t y);
};