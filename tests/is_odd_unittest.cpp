#include <gtest/gtest.h>
#include "is_odd.hpp"

TEST(is_odd, odd_positive) {
    EXPECT_EQ(is_odd(3), true);
    EXPECT_EQ(is_odd(1), true);
    EXPECT_EQ(is_odd(5), true);
    EXPECT_EQ(is_odd(23891), true);
}

TEST(is_odd, odd_negative) {
    EXPECT_EQ(is_odd(-1), true);
    EXPECT_EQ(is_odd(-5), true);
    EXPECT_EQ(is_odd(-43), true);
    EXPECT_EQ(is_odd(-465271), true);
}

TEST(is_odd, zero) {
    EXPECT_EQ(is_odd(0), false);
}

TEST(is_odd, even_positive) {
    EXPECT_EQ(is_odd(2), false);
    EXPECT_EQ(is_odd(4), false);
    EXPECT_EQ(is_odd(16), false);
    EXPECT_EQ(is_odd(476), false); 
}

TEST(is_odd, even_negative) {
    EXPECT_EQ(is_odd(-2), false);
    EXPECT_EQ(is_odd(-4), false);
    EXPECT_EQ(is_odd(-16), false);
    EXPECT_EQ(is_odd(-476), false); 
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
