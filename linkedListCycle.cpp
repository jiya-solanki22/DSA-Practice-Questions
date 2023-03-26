#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
struct node *root=NULL;
void push(struct node **root, int data) {
    struct node *node;
    node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->next = *root;
    *root = node;
}
bool hasCycle(struct node *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        } else {
            struct node *slow = head, *fast = head->next;
            
            while (slow != fast) {
                if (fast == NULL || fast->next == NULL) {
                    return false;
                } else {
                    slow = slow->next;
                    fast = fast->next->next;
                }
            }
            return true;
        }
    }
// Driver function
int main() {
    push(&root, -4);
    push(&root, 0);
    push(&root, 2);
    push(&root, 3);
    int pos=1;
    if(hasCycle(root))
    {
   		cout<<"true";
    }
    else
    {
    	cout<<"false";
    }
    return 0;
}
