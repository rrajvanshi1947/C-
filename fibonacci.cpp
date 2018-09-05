#include <iostream>

using namespace std;

void fibonacci(int A[], int n){
	A[0] = 0;
	A[1] = 1;
	for(int i = 2; i < n; i++)
	A[i] = A[i-1] + A[i-2]; 
	
}

int main(){
	int A[15];
	fibonacci(A, 15);
	for(int i = 0; i < 15; i++)
	cout << A[i] << " ";
	cout << endl;
	return 0;
}
