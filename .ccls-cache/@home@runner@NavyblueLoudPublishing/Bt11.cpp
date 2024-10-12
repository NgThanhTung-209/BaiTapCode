/*#include <iostream>
int* filterMultiples(const int* array, int size, int thirdParam, int& newSize) {
    newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % thirdParam == 0) {
            ++newSize;  
        }
    }
    int* newArray = new int[newSize];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] % thirdParam == 0) {
            newArray[index] = array[i];
            ++index;
        }
    }

    return newArray; 
}

int main() {
    int arr[] = {1, 14, 21, 35, 42, 50, 63, 80};
    int size = sizeof(arr) / sizeof(arr[0]);
    int thirdParam = 7;
    int newSize;
    int* multiplesArray = filterMultiples(arr, size, thirdParam, newSize);
    std::cout << "Array of multiples of " << thirdParam << ": ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << multiplesArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] multiplesArray;
    return 0;
}*/