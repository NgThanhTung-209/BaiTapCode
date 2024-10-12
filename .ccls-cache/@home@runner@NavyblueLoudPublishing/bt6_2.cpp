/*#include <iostream>
using namespace std;
int main() {
int A[5] = {2, 4, 6, 8, 10};
int *p = A;
int *q = &A[4];
cout << "Mảng ban đầu: ";
for (int i = 0; i < 5; i++) {
cout << A[i] << " ";
}
cout << endl;
while (p < q) {
int temp = *p;
*p = *q;
*q = temp;
p++;
q--;
}

cout << "Mảng sau khi đảo ngược: ";
for (int i = 0; i < 5; i++) {
cout << A[i] << " ";
}
cout << endl;
return 0;
}*/