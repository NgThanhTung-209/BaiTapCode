/*#include <iostream>
int* getMultiples(const int* array, int size, int divisor, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % divisor == 0) {
            ++newSize;
        }
    }

    int* newArray = new int[newSize];

    int j = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % divisor == 0) {
            newArray[j++] = array[i];
        }
    }

    return newArray; 
}

int main() {
    int arr[] = {14, 21, 35, 5, 10, 49, 28};
    int size = sizeof(arr) / sizeof(arr[0]);
    int divisor = 7;
    int newSize;
    int* multiplesArray = getMultiples(arr, size, divisor, newSize);
    std::cout << "Elements that are multiples of " << divisor << ": ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << multiplesArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] multiplesArray;

    return 0;
}*/