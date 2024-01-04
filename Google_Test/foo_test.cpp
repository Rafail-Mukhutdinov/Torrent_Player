// tests/foo_test.cpp
#include "gtest/gtest.h"
#include "../Project_2/foo.h"

class FooTest : public ::testing::Test {
protected:
    Foo foo;
};

TEST_F(FooTest, HandlesPositiveInput) {
    EXPECT_EQ(4, foo.Bar(2));
}
