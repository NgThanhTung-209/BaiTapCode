/*#include <iostream>
#include <cstdio>
using namespace std;
int main() {
FILE *filePtr;
char ch;
// Mở file
filePtr = fopen("example.txt", "r");
if (filePtr == NULL) {
cout << "Không thể mở file." << endl;
return 1;
}
// Đọc và in nội dung file
cout << "Nội dung file:" << endl;
while ((ch = fgetc(filePtr)) != EOF) {
cout << ch;
}
// Đóng file
fclose(filePtr);
return 0;
}*/