#include <iostream>

using namespace std;

int A[10];
int front = -1;
int rear = -1;

bool isEmpty(){
	if(front == -1 && rear == -1)
	return true;
	else
	return false;
}

bool isFull(){
	if(rear == sizeof(A)/sizeof(A[0]) - 1)
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
	rear++;
	A[rear] = x;
	}
}

void deQueue(){
	if(isEmpty())
	cout << "Queue is empty" << endl;

	else if(front == 0 && rear == -0){
	cout << A[front] << endl;	
	front--;
	rear--;
	}

	else{
	cout << A[front] << endl;
	front++;	
	}

}

int main(){
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	for(int i = 0 ; i < 4 ; i++)
	cout << A[i] << endl;
	deQueue(); 
	cout << isEmpty() << endl;
	cout << isFull()<< endl;
	return 0;
}
