/*#include <iostream>
int* getEvenIndexElements(const int* array, int size, int& newSize) {
    newSize = (size + 1) / 2;
    int* newArray = new int[newSize];
    for (int i = 0; i < newSize; ++i) {
        newArray[i] = array[i * 2];  
    }

    return newArray; 
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newSize;
    int* evenArray = getEvenIndexElements(arr, size, newSize);
    std::cout << "Elements at even indices: ";
    for (int i = 0; i < newSize; ++i) {
        std::cout << evenArray[i] << " ";
    }
    std::cout << std::endl;
    delete[] evenArray;
    return 0;
}*/