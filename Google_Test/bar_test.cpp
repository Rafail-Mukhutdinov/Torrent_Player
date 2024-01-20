// tests/bar_test.cpp
#include "gtest/gtest.h"
#include "../Project_1_Boost/bar.h"


class BarTest : public ::testing::Test {
protected:
    Bar bar;
};

TEST_F(BarTest, HandlesNonEqualInput) {
    EXPECT_TRUE(bar.Qux(3, 2));
}
