#include <iostream>
#include <string>

using namespace std;

void insertionSort(int A[], int n){
	for(int i = 1; i < n; i++){
	//int value = A[i];
	int hole = i;

	while(hole > 0 && A[hole] < A[hole-1]){
	swap(A[hole], A[hole-1]);			//A[hole] = A[hole-1];
	//A[hole-1] = value;
	hole--;	
		}
	}
	for(int i = 0; i < n; i++)
	cout << A[i] << " ";
	cout << endl;
}

int main(){
	int A[] = {12,24,11,34,0,-3,22,45,10,89,111,-58,125,1,12};
	/*int i = 0; 
	cout << "Input first element" << endl;
	cin >> A[i];

	while(i <= 5){
	i++;
	cout << "Insert next element or 0 to exit" << endl;
	cin >> A[i];
	 
	}*/
	
	insertionSort(A, sizeof(A)/sizeof(A[0]));	
	return 0;
}
