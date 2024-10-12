/*#include <iostream>
int* concatenateArrays(const int* array1, int size1, const int* array2, int size2) {
    int newSize = size1 + size2;
    int* newArray = new int[newSize];
    for (int i = 0; i < size1; ++i) {
        newArray[i] = array1[i];
    }
    for (int i = 0; i < size2; ++i) {
        newArray[size1 + i] = array2[i];
    }
    return newArray;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int* concatenatedArray = concatenateArrays(arr1, size1, arr2, size2);
    std::cout << "Concatenated array: ";
    for (int i = 0; i < size1 + size2; ++i) {
        std::cout << concatenatedArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] concatenatedArray;

    return 0;
}*/