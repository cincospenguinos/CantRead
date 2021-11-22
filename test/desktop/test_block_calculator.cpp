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
			TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(x, y));
		}

		TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, y));
	}
}

void test_BlockCalculatorSetsTwoCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(2);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsThreeCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(3);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsFourCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(4);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsFiveCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(5);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsSixCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(6);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsSevenCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(7);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsEightCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(8);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

void test_BlockCalculatorSetsNineCorrectly() {
	BlockCalculator calculator;
	calculator.setNumber(9);

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 0));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 0));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 1));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 1));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 1));

	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(0, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(1, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(2, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(3, 2));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 2));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 3));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 3));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 3));

	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(0, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(1, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(2, 4));
	TEST_ASSERT_TRUE(calculator.mustDrawForCurrentNumber(3, 4));
	TEST_ASSERT_FALSE(calculator.mustDrawForCurrentNumber(4, 4));
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_BlockCalculatorInstantiates);
	RUN_TEST(test_BlockCalculatorSetsZeroCorrectly);
	RUN_TEST(test_BlockCalculatorSetsOneCorrectly);
	RUN_TEST(test_BlockCalculatorSetsTwoCorrectly);
	RUN_TEST(test_BlockCalculatorSetsThreeCorrectly);
	RUN_TEST(test_BlockCalculatorSetsFourCorrectly);
	RUN_TEST(test_BlockCalculatorSetsFiveCorrectly);
	RUN_TEST(test_BlockCalculatorSetsSixCorrectly);
	RUN_TEST(test_BlockCalculatorSetsSevenCorrectly);
	RUN_TEST(test_BlockCalculatorSetsEightCorrectly);
	RUN_TEST(test_BlockCalculatorSetsEightCorrectly);
	return UNITY_END();
}