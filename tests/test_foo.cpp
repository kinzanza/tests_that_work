#include <gtest/gtest.h>
#include "../example.h"
TEST(test_foo, test_foo){
    EXPECT_EQ(1, foo());
}