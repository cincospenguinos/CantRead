#include <stdint.h>

class BlockCalculator {
public:
	BlockCalculator();
	void setNumber(uint8_t number);
	bool mustDrawForCurrentNumber(int16_t x, int16_t y);
private:
	uint8_t _number;
};