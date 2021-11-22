#include "unity.h"
#include <block_calculator.h>

void test_BlockCalculatorInstantiates() {
	BlockCalculator calculator;
}

void test_BlockCalculatorSetsZeroCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(0);

	for (int x = 0; x < 5; x++) {
		TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(x, 0));
	}

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	for (int x = 0; x < 5; x++) {
		TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(x, 4));
	}
}

void test_BlockCalculatorSetsOneCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(1);

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(x, y));
		}

		TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(4, y));
	}
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_BlockCalculatorInstantiates);
	RUN_TEST(test_BlockCalculatorSetsZeroCorrectly);
	RUN_TEST(test_BlockCalculatorSetsOneCorrectly);
	return UNITY_END();
}