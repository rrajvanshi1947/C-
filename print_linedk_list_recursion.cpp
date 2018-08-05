#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void print(node* n){
	if(n->link == 0)
	return;
		
	print(n->link);
	cout << n->data << " ";		//Flip these two lines to print in serial or reverse order. Currently, the order is reversed.
}

void insert(int x, int n){
	node* temp = new node();
	temp->data = x;
	temp->link = 0;
	if(n == 1){
	temp->link = head;
	head = temp;
	//cout << head->data << endl;
	return;
	}
	node* temp1 = head;
	for(int i = 0; i < n-2; i++){
	temp1 = temp1->link;
	}
	temp->link = temp1->link;
	temp1->link = temp;
	//cout << temp1->data << endl;
}

int main(){
	head = NULL;
	insert(1, 1);
	insert(2,2);
	print(head);
	cout << endl;
	insert(3,3);
	print(head);
	cout << endl;
	insert(4,1);
	print(head);
	cout << endl;
	insert(5,2);
	print(head);
	cout << endl;
	return 0;
}
