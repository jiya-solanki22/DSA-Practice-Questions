#include <bits/stdc++.h>
using namespace std;

// structure of a node in the linked list
struct Node {
int data;
struct Node* next;
};

// function to insert a node in the linked list
void push(struct Node** head_ref, int new_data)
{
struct Node* new_node = new Node;
new_node->data = new_data;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}

// function to sort the linked list
void sortList(struct Node* head)
{
// pointer to traverse the linked list
struct Node* current = head;
struct Node* index = NULL;

// loop to traverse the linked list
while (current != NULL) {

// loop to compare current node with all other nodes
index = current->next;
while (index != NULL) {

// checking for duplicate values
if (current->data == index->data) {

// deleting the duplicate node
current->next = index->next;
free(index);
index = current->next;
}
else {
index = index->next;
}
}
current = current->next;
}
}

// function to display the linked list
void printList(struct Node* node)
{
while (node != NULL) {
cout << node->data << " ";
node = node->next;
}
cout << endl;
}

// main function
int main()
{
struct Node* head = NULL;
push(&head, 20);
push(&head, 13);
push(&head, 13);
push(&head, 11);
push(&head, 11);
push(&head, 11);

cout << "Linked List before removing duplicates : \n";
printList(head);

sortList(head);

cout << "Linked List after removing duplicates : \n";
printList(head);

return 0;
}
//This code is contributed by Veerendra Singh Rajpoot

