#include "cant_read.h"

#define SCREEN_COLOR_BLACK 0
#define SCREEN_COLOR_WHITE 1
#define NUMBER_SIZE 20
#define SECTOR_SIZE 100

static BlockCalculator calculators[] = {
	BlockCalculator(),
	BlockCalculator(),
	BlockCalculator(),
	BlockCalculator(),
};

void CantRead::drawWatchFace() {
	display.fillScreen(0);

	calculators[0].setNumber(currentTime.Hour / 10);
	calculators[1].setNumber(currentTime.Hour % 10);
	calculators[2].setNumber(currentTime.Minute / 10);
	calculators[3].setNumber(currentTime.Minute % 10);

	for (int16_t sector = 0; sector < 4; sector++) {
		drawNumber(calculators[sector], sector);
	}
}

void CantRead::drawNumber(BlockCalculator &calculator, int16_t sector) {
	for (int16_t y = 0; y < 5; y++) {
		for (int16_t x = 0; x < 5; x++) {
			if (calculator.mustDrawForCurrentNumber(x, y)) {
				drawBlockAt(sector, x, y);
			}
		}
	}
}

void CantRead::drawBlockAt(int16_t sector, int16_t x, int16_t y) {
	int xPos = x * NUMBER_SIZE;
	int yPos = y * NUMBER_SIZE;

	if (sector % 2 == 1) {
		xPos += SECTOR_SIZE;
	}

	if (sector >= 2) {
		yPos += SECTOR_SIZE;
	}

	for (int i = 0; i < NUMBER_SIZE; i++) {
		for (int j = 0; j < NUMBER_SIZE; j++) {
			display.drawPixel(xPos + i, yPos + j, SCREEN_COLOR_WHITE);
		}
	}
}