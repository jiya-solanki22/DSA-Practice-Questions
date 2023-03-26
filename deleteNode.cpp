// delete without head pointer
#include <bits/stdc++.h>
using namespace std;
struct Node {
   int data;
   struct Node* next;
};
void deleteNodeWithoutHead(struct Node* pos)
{
    if (pos == NULL) // If linked list is empty
        return;
    else {
 
        if (pos->next == NULL) {
            printf("This is last node, require head, can't be freed\n");
            return;
        }
 
        struct Node* temp = pos->next;
 
        // Copy data of the next node to current node
        pos->data = pos->next->data;
        pos->next = pos->next->next;
 
        free(temp);
    }
}
void printLinkedList(Node* head) {
   Node* temp = head;
   while (temp) {
      cout << temp->data << " ";
      temp = temp->next;
   }
}
void insertNode(struct Node** head_ref, int new_data)
{
    /* allocate node */
    struct Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}

int main() {
   struct Node* head = NULL;
   insertNode(&head, 5);
   insertNode(&head, 4);
   insertNode(&head, 3);
   insertNode(&head, 2);
   insertNode(&head, 1);
   cout << "Linked List before deletion:" << endl;
   printLinkedList(head);
   Node* del = head->next;
   deleteNodeWithoutHead(del);
   cout << "\nFinal Linked List after deletion of 4:"<< endl;
   printLinkedList(head);
   return 0;
}

