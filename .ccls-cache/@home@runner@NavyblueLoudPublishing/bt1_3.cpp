/*#include<iostream>
using namespace std;

void reverseString(char *str) {
char *end = str;
char temp;
if (str) {
while (*end) {
++end;
}
--end; // Trỏ đến ký tự cuối cùng (không phải null)
while (str < end) {

temp = *str;
*str++ = *end;
*end-- = temp;
}
}
}
int main() {
char str[] = "Hello, World!";
cout << "Chuỗi ban đầu: " << str << endl;
reverseString(str);
cout << "Chuỗi sau khi đảo ngược: " << str << endl;
return 0;
}*/