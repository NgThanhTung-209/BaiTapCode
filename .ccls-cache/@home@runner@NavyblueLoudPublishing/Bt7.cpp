/*#include <iostream>
#include <unordered_map>  
int findMode(const int* array, int size) {
    std::unordered_map<int, int> frequencyMap;
    for (const int* ptr = array; ptr < array + size; ++ptr) {
        frequencyMap[*ptr]++; 
    }
    int mode = -1;            
    int maxCount = 1;         

    for (const auto& entry : frequencyMap) {
        if (entry.second > maxCount) {
            mode = entry.first;   
            maxCount = entry.second;  
        }
    }


    return mode;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mode = findMode(arr, size);
    if (mode != -1) {
        std::cout << "The mode is: " << mode << std::endl;
    } else {
        std::cout << "There is no mode." << std::endl;
    }

    return 0;
}*/