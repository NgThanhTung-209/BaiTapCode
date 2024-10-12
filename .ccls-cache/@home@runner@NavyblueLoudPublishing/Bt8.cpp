/*#include <iostream>
#include <algorithm>  
double findMedian(int* array, int size) {
    std::sort(array, array + size);
    if (size % 2 == 1) {
        return array[size / 2];
    } else {
        int mid1 = array[size / 2 - 1];
        int mid2 = array[size / 2];
        return (mid1 + mid2) / 2.0;
    }
}

int main() {
    int arr[] = {7, 1, 3, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    double median = findMedian(arr, size);
    std::cout << "The median is: " << median << std::endl;

    return 0;
}*/