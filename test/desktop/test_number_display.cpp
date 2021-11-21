#include "unity.h"
#include <number_display.h>

void test_NumberDisplayConstructs(void) {
	NumberDisplay display;
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_NumberDisplayConstructs);
	return UNITY_END();
}