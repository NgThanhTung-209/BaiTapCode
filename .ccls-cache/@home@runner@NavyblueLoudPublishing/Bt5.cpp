/*#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm> 
void showArray(const double* array, int size) {
    for (const double* ptr = array; ptr < array + size; ++ptr) {
        std::cout << std::fixed << std::setprecision(2) << *ptr << " ";
    }
    std::cout << std::endl;
}

void showSortedArray(const double* array, int size) {
    double* sortedArray = new double[size];
    std::copy(array, array + size, sortedArray);
    std::sort(sortedArray, sortedArray + size);
    for (const double* ptr = sortedArray; ptr < sortedArray + size; ++ptr) {
        std::cout << std::fixed << std::setprecision(2) << *ptr << " ";
    }
    std::cout << std::endl;
    delete[] sortedArray;
}

int main() {
    int numContributions;
    std::cout << "Enter the number of contributions: ";
    std::cin >> numContributions;
    double* contributions = new double[numContributions];
    for (int i = 0; i < numContributions; ++i) {
        std::cout << "Enter contribution #" << (i + 1) << ": ";
        std::cin >> *(contributions + i); 
    }
    std::cout << "\nThe contributions entered are:\n";
    showArray(contributions, numContributions);
    std::cout << "\nThe contributions sorted in ascending order are:\n";
    showSortedArray(contributions, numContributions);
    delete[] contributions;
    return 0;
}*/