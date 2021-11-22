#include <block_calculator.h>

#define BLOCK_WIDTH 5

static const char zero[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

BlockCalculator::BlockCalculator() {}

void BlockCalculator::setNumber(uint8_t number) {
	_number = number;

	if (_number > 9) {
		_number = 0;
	}
}

bool BlockCalculator::mustDrawForCurrentNumber(int16_t x, int16_t y) {
	const char * num;

	switch(_number) {
	default:
		num = zero;
		break;
	}

	return num[y * BLOCK_WIDTH + x] == 1;
}
