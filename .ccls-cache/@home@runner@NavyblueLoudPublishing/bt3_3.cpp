/*#include <iostream>
using namespace std;

// Định nghĩa cấu trúc Node
struct Node {
int data;
Node* next;
};
// Hàm thêm node mới vào đầu danh sách
void push(Node** head_ref, int new_data) {
Node* new_node = new Node();
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
// Hàm in danh sách
void printList(Node *node) {
while (node != NULL) {
cout << node->data << " ";
node = node->next;
}
cout << endl;
}
int main() {
Node* head = NULL;
// Thêm các phần tử vào danh sách
push(&head, 3);
push(&head, 2);
push(&head, 1);
cout << "Danh sách liên kết: ";
printList(head);
return 0;
}*/