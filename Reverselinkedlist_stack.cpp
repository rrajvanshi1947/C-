#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct node{
	int data;
	node* link;
};

node* head;

void insert(int x){
	node* temp = new node();
	temp->data = x;
	temp->link = head;
	head = temp;
	}

void print(){
	node* temp2 = head;
	while(temp2 != NULL){
	cout << temp2->data << " ";
	temp2 = temp2->link;
	}
	cout << endl;
}

void reverse(){
	if(head == 0)
	return;
	
	stack<node*> S;
	node * temp;	//SAFASD
	temp = head;
	while(temp != 0){
	S.push(temp);
	temp = temp->link;
	}
	
	temp = S.top();
	head = temp;
	S.pop();
	while(!S.empty()){
	temp->link = S.top();
	S.pop();
	temp = temp->link;
	}
	temp->link = 0;
}

int main(){
	head = 0;
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	print();
	reverse();
	print();


	return 0;
}
