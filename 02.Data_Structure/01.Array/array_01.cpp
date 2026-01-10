// 배열은 기본중에 기본.

#include <iostream>

int main(void) {
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int arraySize = sizeof(array) / sizeof(int);

    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}