/*#include<iostream>
using namespace std;

int arraySum(int *arr, int size) {
int sum = 0;
for (int i = 0; i < size; i++) {
sum += *(arr + i); // Tương đương với sum += arr[i]
}
return sum;
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
cout << "Tổng các phần tử trong mảng: " << arraySum(arr, size) << endl;
return 0;
}*/