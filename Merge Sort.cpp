#include <iostream>
#include <string>

using namespace std;

void merge(int A[], int low, int high, int mid){
	int i = 0;
	int j = mid;
	int k = 0;
	int n1 = mid -low;
	int n2 = high - mid;
	int n3 = n2;
	int L[n1];
	int R[n2];

	for(int i = 0; i < n1; i++)
	L[i] = A[i];

	for (int i = 0; i < n2; i++){
	R[i] = A[n3];
	n3++;	
	}
	

	while(i < n1 && j < n2){		//&
	if(L[i] <= R[j]){
		A[k] = L[i];
		i++;
		}
	else{
		A[k] = R[j];
		j++;
		}
	k++;	
	}
	while(i < n1){
	A[k] = L[i];
	k++;
	i++;
	}
	while(j < n2){
	A[k] = R[j];
	k++;
	j++;
	}
}

void mergeSort(int A[], int low, int high){
	/*int mid = n/2;
	int L[mid];
	int R[10];

	if(n%2 == 0)
	int R[mid];
	else
	int R[mid + 1];

	for(int i = 0; i < mid; i++)
	L[i] = A[i];

	for(int i = mid; i < n; i++)
	R[i] = A[i];

	mergeSort(L, mid);
	if(n%2 == 0)
	mergeSort(R, mid);
	else
	mergeSort(R, mid + 1);
	if(n%2 == 0)
	merge(L, R, A, mid, mid, n);
	else
	merge(L, R, A, mid, mid + 1, n); */

	if(low < high){
	int mid = (low + high)/2;

	mergeSort(A, low, mid);
	mergeSort(A, mid + 1, high);
	merge(A, low, high, mid);
	}
}

int main(){
	int A[] = {1,4,2,6,3,9,6,32,67,23,45,324,546,123,345};
	mergeSort(A, 0, 15);
	for(int i = 0; i < 15; i++)
	cout << A[i] << " ";
	cout << endl;

	return 0;
}
