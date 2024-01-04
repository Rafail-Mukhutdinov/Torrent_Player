// tests/bar_test.cpp
#include "gtest/gtest.h"
#include "../lib/bar.h"


class BarTest : public ::testing::Test {
protected:
    Bar bar;
};

TEST_F(BarTest, HandlesNonEqualInput) {
    EXPECT_TRUE(bar.Qux(3, 2));
}
