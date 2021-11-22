#include <block_calculator.h>

#define BLOCK_WIDTH 5

static const char zero[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

static const char one[] = {
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
};

static const char two[] = {
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 1,
	0, 0, 0, 0, 0,
};

static const char three[] = {
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

static const char four[] = {
	0, 1, 1, 1, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
};

static const char five[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 1,
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

static const char six[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 1,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

static const char seven[] = {
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
	1, 1, 1, 1, 0,
};

static const char eight[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
};

static const char nine[] = {
	0, 0, 0, 0, 0,
	0, 1, 1, 1, 0,
	0, 0, 0, 0, 0,
	1, 1, 1, 1, 0,
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
	case 1:
		num = one;
		break;
	case 2:
		num = two;
		break;
	case 3:
		num = three;
		break;
	case 4:
		num = four;
		break;
	case 5:
		num = five;
		break;
	case 6:
		num = six;
		break;
	case 7:
		num = seven;
		break;
	case 8:
		num = eight;
		break;
	case 9:
		num = nine;
		break;
	default:
		num = zero;
		break;
	}

	return num[y * BLOCK_WIDTH + x] == 1;
}
