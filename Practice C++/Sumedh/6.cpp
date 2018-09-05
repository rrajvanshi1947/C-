/*-Given the node in a doubly linked list as
struct node {
int data;
node* prev;
node* next;
};
The data structure of each node is allocated with the new operator. The head of the unordered
doubly linked list is in a global variable head with data type node*. Without using any existing
C++ classes, implement the following self-contained C++ function to remove a single/first
occurrence of an integer val from the doubly linked list. bool remove(int val)
The function returns true if the value val is found and removed; else it returns false. (10
points)*/

#include <iostream>

using namespace std;

struct node{
	int data;
	node* prev;
	node* next;
};	

node* head = NULL;

void insert(int x){
	node* temp = new node();
	temp->data = x;
	temp->next = head;
	head = temp;

	}

void print(){
	node* temp2 = head;
	while(temp2 != NULL){
	cout << temp2->data << " ";
	temp2 = temp2->next;
	}
	cout << endl;
}

bool remove(int val){
	if(head == NULL)
	return false;

	node* temp = head;
	if(head->data == val){
	if(head->next == NULL){
	delete temp;
	head = NULL;
	return true;
		}
	else{
	head = temp->next;
	head->prev = NULL;
	delete temp;
	return true;
		}
	}
 
	
	node* temp2 = temp->next;
	while(temp2->next != NULL){
	if(temp2->data == val){
	
	node* temp3 = temp2->next;
	temp->next = temp3;
	temp3->prev = temp;
	delete temp2;
	return true;
		}
	temp = temp->next;
	temp2 = temp->next;
	}
	if(temp2->data == val){
	temp->next = NULL;
	delete temp2;
	return true;
	}
	return false;
}

int main(){
	cout <<remove(1) << endl;
	insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
insert(6);
insert(7);
insert(8);
insert(9);
insert(10);

	print();
	cout <<remove(15) << endl;
	print();
	return 0;
}
