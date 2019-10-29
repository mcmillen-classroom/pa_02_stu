#include "../src/long_list.c"
#include <gtest/gtest.h>

TEST(LongList, TestName)
{
    long_list_node_t *list = long_list_init();
    ASSERT_NE(list, nullptr);
}

// TODO: write tests

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}