/*2.-Write a C++ function that takes an integer vector as an argument and doubles the value
of each entry in the vector using iterators. Use the most appropriate type of iterator for
the task at hand.*/

#include <iostream>
#include <vector>

using namespace std;

void doubleValue(vector<int> &A);

int main(){
	vector<int> first;
	for(int i = 1; i < 11; i++)
	first.push_back(i);

	for(unsigned int i = 0; i < first.size(); i++)
	cout << first[i] << " ";
	cout << endl;

	doubleValue(first);
	for(unsigned int i = 0; i < first.size(); i++)
	cout << first[i] << " ";
	cout << endl;

	return 0;
}

void doubleValue(vector<int> &A){
	for(vector<int>::iterator i = A.begin(); i != A.end(); ++i){
	*i = 2*(*i);
	}
}
