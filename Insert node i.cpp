#include <iostream>
#include <string>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void insert(int x, int n){
	node* temp = new node();
	temp->data = x;
	temp->link = NULL;
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

void print(){
	node* temp = head;
	while(temp != NULL){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
}


int main(){
	head = NULL;
	insert(1, 1);
	insert(2,2);
	print();
	insert(3,3);
	print();
	insert(4,4);
	print();
	insert(5,2);
	print();
	/*node* temp1 = head;
	for(int i = 1; i < 3; i ++){
	cout << temp1->data << endl;
	temp1 = temp1->link;	
	}*/
	return 0;	
}
