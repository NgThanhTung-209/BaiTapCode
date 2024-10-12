/*#include <iostream>
using namespace std;
int main() {
int rows = 3, cols = 4;
// Cấp phát động mảng 2 chiều
int **arr = new int*[rows];
for (int i = 0; i < rows; ++i) {
arr[i] = new int[cols];
}
// Điền giá trị
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
arr[i][j] = i * cols + j;
}
}
// In ma trận
cout << "Ma trận 2 chiều:" << endl;
for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
cout << arr[i][j] << "\t";
}
cout << endl;
}
// Giải phóng bộ nhớ
for (int i = 0; i < rows; ++i) {
delete[] arr[i];
}
delete[] arr;
return 0;
}*/