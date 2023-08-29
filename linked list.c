#include <stdio.h>
#include <stdlib.h>
struct Node {
int data;
struct Node* next;
};
void insertAtBeginning(struct Node** head, int newData) {
 struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
newNode->data = newData;
newNode->next = (*head);
(*head) = newNode;
}
int main() {
struct Node* head = NULL;
insertAtBeginning(&head, 1);
return 0;
}
