#include <stdio.h>
#include <template_api.h>
#include "gtest/gtest.h"

TEST(my_test, sum) {
    EXPECT_EQ(2, sum(1, 1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}