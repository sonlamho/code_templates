#include "module0.h"
#include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos) {
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

TEST(absTest, all) {
    ASSERT_EQ(1.0, absolute_value(-1.0));
    ASSERT_EQ(0.0, absolute_value(0.0));
    ASSERT_EQ(27.0, absolute_value(27.0));
}

TEST(cubedTest, all) {
    ASSERT_EQ(-1.0, cubed(-1.0));
    ASSERT_EQ(0.0, cubed(0.0));
    ASSERT_EQ(27.0, cubed(3.0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
