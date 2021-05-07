#include <gtest/gtest.h>
#include "fact.h"

TEST(HelloTest, BasicAssertions) {
    EXPECT_STRNE("hello", "world");

    EXPECT_EQ(8+5, 13);

    EXPECT_EQ(factorial(5), 120);
}
