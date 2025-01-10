#include <gtest/gtest.h>
#include "algorithms/Search.hpp"

TEST(SearchAlgorithms, binary_search_int) {
    const int SEARCH_ITEM = 99;
    int array[10] = {0, 10, 22, 33, 44, 55, 66, 77, 88, 99};

    GTEST_ASSERT_EQ(binary_search_int(array, 10, SEARCH_ITEM), 9);
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}