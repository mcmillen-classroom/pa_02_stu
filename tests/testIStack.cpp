#include "../src/istack.c"
#include <gtest/gtest.h>

TEST(IStack, TestName)
{
    istack_t stack;
    istack_init(&stack);
    ASSERT_EQ(stack.size, 8);
}

// TODO: write tests

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}