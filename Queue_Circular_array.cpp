#include <iostream>

#define MAX_SIZE 10

using namespace std;

int A[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty(){
	if(front == -1 && rear == -1)
	return true;
	else
	return false;
}

bool isFull(){
	if(front == (rear + 1)%MAX_SIZE)
	return true;
	else
	return false;
}

void enQueue(int x){
	if(isFull())
	cout << "Queue is full" << endl;
	
	else if(isEmpty()){
	front++;
	rear++;
	A[rear] = x;
	}

	else{
	rear = (rear + 1)%MAX_SIZE;
	A[rear] = x;
	}
}

void deQueue(){
	if(isEmpty())
	cout << "Queue is empty" << endl;

	else if(front == 0 && rear == 0){
	cout << A[front] << endl;	
	front--;
	rear--;
	}

	else{
	cout << A[front] << endl;
	front = (front + 1)%MAX_SIZE;	
	}
}

int front1(){
	if(front == -1)
	cout << "Array is empty" << endl;
	else
	return A[front];
}

int main(){
	for(int i = 0; i < MAX_SIZE; i++)
	enQueue(i);
	
	for(int i = 0 ; i < MAX_SIZE ; i++)
	cout << A[i] << " ";
	cout << endl;
	cout << isFull()<< endl;
	deQueue(); 
	enQueue(10);

	for(int i = 0 ; i < MAX_SIZE ; i++)
	cout << A[i] << " ";
	cout << endl;

	cout << isEmpty() << endl;
	cout << isFull()<< endl;
	return 0;
}

