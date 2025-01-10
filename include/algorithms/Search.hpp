#ifndef Search_h
#define Search_h

template<typename T>
int binary_search_int(const T* base, size_t lenght, T search_item) {
    size_t low = 0;
    size_t hight = lenght;

    while(low < hight) {
        int middle = low + (hight - low) / 2;
        T guess = base[middle];

        if (guess == search_item) {
            return middle;
        }
        else if (guess > search_item) { 
            hight = middle;
        } 
        else {
            low = middle + 1;
        }
    }

return -1;
}

#endif