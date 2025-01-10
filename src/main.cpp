#include <cstdio>
#include "algorithms/Search.hpp"

const int SEARCH_ITEM = 99;

int main() {
    int array[10] = {0, 10, 22, 33, 44, 55, 66, 77, 88, 99};

    int result = binary_search_int(array, 10, SEARCH_ITEM);    
    printf("Search item {%d}, position -> %d", SEARCH_ITEM, result);

    char pause_char;
    scanf_s("%c", &pause_char, sizeof(pause_char));

    return 0;
}