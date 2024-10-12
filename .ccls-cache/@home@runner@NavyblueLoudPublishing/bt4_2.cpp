/*#include <iostream>
using namespace std;
int main() {
int size;
cout << "Nhập số lượng phần tử: ";
cin >> size;
// Cấp phát động mảng
int* arr = new int[size];
// Nhập giá trị cho mảng
for (int i = 0; i < size; i++) {
cout << "Nhập phần tử thứ " << i + 1 << ": ";
cin >> arr[i];
}

// Tìm giá trị lớn nhất
int max = arr[0];
for (int i = 1; i < size; i++) {
if (arr[i] > max) {
max = arr[i];
}
}
// In kết quả
cout << "Giá trị lớn nhất: " << max << endl;
// Giải phóng bộ nhớ
delete[] arr;
return 0;
}*/