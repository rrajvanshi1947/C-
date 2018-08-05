#include <iostream>
#include <string>

using namespace std;

int partition(int *A, int start, int end){
	int pivot = A[end];
	int pIndex = start;

	for(int i = start; i < end; i++){
	if(A[i] <= pivot){
	swap(A[i], A[pIndex]);
	pIndex++;
		}
	}
	swap(A[pIndex], A[end]);
	return pIndex;
}

void quickSort(int *A, int start, int end){
	if(start < end){
	int pIndexnew = partition(A, start, end);
	quickSort(A, start, pIndexnew - 1);
	quickSort(A, pIndexnew + 1, end);

	}

}

int main(){
	int A[] = {1,4,2,6,3,9,6,32,67,23,45,324,546,123,345};
	quickSort(A, 0, 15);
	for(int i = 0; i < 15; i++)
	cout << A[i] << " ";
	cout << endl;



	return 0;
}
