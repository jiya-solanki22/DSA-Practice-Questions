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
 
// Function to reverse the list
void reverse(struct node **root) {
    struct node *temp = NULL;
    struct node *prev = NULL;
    struct node *current = *root;
    while(current != NULL) {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    *root = prev;
}
 
// To check our program 
void printnodes(struct node *root) {
    while(root != NULL) {
        cout<<root->data<<" ";
        root = root->next;
    }
}
 
// Driver function
int main() {
    push(&root, 4);
    push(&root, 3);
    push(&root, 2);
    push(&root, 1);
    cout << "Linked List Before Reversing" << endl;
    printnodes(root);
    reverse(&root);
    cout << endl;
    cout << "Linked List After Reversing"<<endl;
    printnodes(root);
    return 0;
}
