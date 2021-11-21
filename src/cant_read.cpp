#include "cant_read.h"

#define SCREEN_COLOR_BLACK 0
#define SCREEN_COLOR_WHITE 1
#define NUMBER_SIZE 4

static const uint8_t _large_pixel_bitmap[] = {
	SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE,
	SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE,
	SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE,
	SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE, SCREEN_COLOR_WHITE,
};

void CantRead::drawWatchFace() {
	display.fillScreen(0);

	// Let's draw a zero
	display.drawInvertedBitmap(NUMBER_SIZE * 1, NUMBER_SIZE * 1, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 2, NUMBER_SIZE * 1, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 3, NUMBER_SIZE * 1, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 1, NUMBER_SIZE * 2, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 2, NUMBER_SIZE * 2, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 3, NUMBER_SIZE * 2, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 1, NUMBER_SIZE * 3, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 2, NUMBER_SIZE * 3, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 3, NUMBER_SIZE * 3, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_WHITE);
	display.drawInvertedBitmap(NUMBER_SIZE * 0, NUMBER_SIZE * 0, _large_pixel_bitmap, NUMBER_SIZE, NUMBER_SIZE, SCREEN_COLOR_BLACK);
}