#include <iostream>

using namespace std;

struct node{
	int data;
	node* link;
	};

node* front = 0;
node* rear = 0;

void enQueue(int x){
	node* temp = new node();
	temp->data = x;
	temp->link = 0;
	
	if(front == 0 && rear == 0){
	front = temp;	
	}
	
	else{
	rear->link = temp;
	}
	rear = temp;
	
}

void deQueue(){
	if(front == 0)
	cout << "Queue is empty" << endl;

	else if(front == rear){
	node* temp = front;
	front = rear = 0;
	delete(temp);
	}

	else{
	node* temp = front;
	front = front->link;
	delete(temp);
	}
}

int front1(){
	if(front == 0)
	cout << "Queue is empty" << endl;
	else
	return front->data;
}

bool isEmpty(){
	if(front == 0)
	return true;
	else
	return false;
}


int main(){
	deQueue();
	front1();
	cout << isEmpty() << endl;

	for(int i = 0; i < 5; i++)
	enQueue(i);

	node* temp = front;
	while(temp != 0){
	cout << temp->data << " ";
	temp = temp->link;
	}
	cout << endl;
	
	deQueue();
	node* temp1 = front;
	while(temp1 != 0){
	cout << temp1->data << " ";
	temp1 = temp1->link;
	}
	cout << endl;
	
	return 0;
}
