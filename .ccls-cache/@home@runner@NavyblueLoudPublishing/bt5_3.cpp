/*#include <iostream>
using namespace std;
void reverseArray(int *start, int *end) {
while (start < end) {
int temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
int main() {
int arr[] = {1, 2, 3, 4, 5};
int size = sizeof(arr) / sizeof(arr[0]);
cout << "Mảng ban đầu: ";
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";
}
cout << endl;
reverseArray(arr, arr + size - 1);
cout << "Mảng sau khi đảo ngược: ";
for (int i = 0; i < size; i++) {
cout << arr[i] << " ";


}
cout << endl;
return 0;
}*/