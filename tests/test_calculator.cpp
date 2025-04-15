#include <gtest/gtest.h>
#include "../include/calculator.h"

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;
};

TEST_F(CalculatorTest, AddTest) {
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-1, 1), 0);
}

TEST_F(CalculatorTest, SubtractTest) {
    EXPECT_EQ(calc.subtract(5, 3), 2);
    EXPECT_EQ(calc.subtract(3, 5), -2);
}

TEST_F(CalculatorTest, MultiplyTest) {
    EXPECT_EQ(calc.multiply(2, 3), 6);
    EXPECT_EQ(calc.multiply(-1, 5), -5);
}

TEST_F(CalculatorTest, DivideTest) {
    EXPECT_DOUBLE_EQ(calc.divide(6, 3), 2.0);
    EXPECT_DOUBLE_EQ(calc.divide(5, 2), 2.5);
    EXPECT_THROW(calc.divide(5, 0), std::runtime_error);
}