#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct node {
	int data;
	struct node* next;
};

node* newNode(int data){
	node* temp = new node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}
int main() {
	/* Let us create two sorted linked lists to test
	the above functions. Created lists shall be
		a: 5->10->15->40
		b: 2->3->20 */
	node* a = newNode(1);
	a->next = newNode(2);
	a->next->next = newNode(4);
	
	node* b = newNode(1);
	b->next = newNode(3);
	b->next->next = newNode(4);
	vector<int>v;
	while(a!=NULL){
		v.push_back(a->data);
		a=a->next;
	}
	while(b!=NULL){
		v.push_back(b->data);
		b=b->next;
	}
	sort(v.begin(),v.end());
	node* result= newNode(-1);
	node* temp=result;
	for(int i=0;i<v.size();i++){
	result->next=newNode(v[i]);
	result=result->next;
	}
	temp=temp->next;
	cout<<"Resultant Merge Linked List Is :"<<endl;
	while(temp!=NULL){
	cout<<temp->data<<" ";
	temp=temp->next;
	}
	return 0;
}

