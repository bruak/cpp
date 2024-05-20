#include "gtest/gtest.h"
#include "Fixed.hpp"

TEST(FixedTest, DefaultConstructor) {
    Fixed a;
    EXPECT_EQ(a.toInt(), 0);
}

TEST(FixedTest, IntConstructor) {
    Fixed a(10);
    EXPECT_EQ(a.toInt(), 10);
}

TEST(FixedTest, FloatConstructor) {
    Fixed a(10.5f);
    EXPECT_FLOAT_EQ(a.toFloat(), 10.5f);
}

TEST(FixedTest, CopyConstructor) {
    Fixed a(10);
    Fixed b(a);
    EXPECT_EQ(b.toInt(), 10);
}

TEST(FixedTest, AssignmentOperator) {
    Fixed a(10);
    Fixed b;
    b = a;
    EXPECT_EQ(b.toInt(), 10);
}

TEST(FixedTest, ComparisonOperators) {
    Fixed a(10);
    Fixed b(20);
    EXPECT_TRUE(a < b);
    EXPECT_TRUE(b > a);
    EXPECT_TRUE(a <= b);
    EXPECT_TRUE(b >= a);
    EXPECT_TRUE(a != b);
    EXPECT_FALSE(a == b);
}

TEST(FixedTest, ToIntFunction) {
    Fixed a(10.5f);
    EXPECT_EQ(a.toInt(), 10);

    Fixed b(20.99f);
    EXPECT_EQ(b.toInt(), 20);

    Fixed c(-30.6f);
    EXPECT_EQ(c.toInt(), -30);
}

TEST(FixedTest, IncrementDecrementOperators) {
    Fixed a(10);
    a++;
    EXPECT_EQ(a.toInt(), 11);
    a--;
    EXPECT_EQ(a.toInt(), 10);
}

TEST(FixedTest, MinMaxFunctions) {
    Fixed a(10);
    Fixed b(20);
    EXPECT_EQ(Fixed::min(a, b).toInt(), 10);
    EXPECT_EQ(Fixed::max(a, b).toInt(), 20);
}