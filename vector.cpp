#include <iostream>
#include <vector>

using namespace std;

void fillVector(vector<int>& a);

void printVector(const vector<int>& a);

void ifEven(const vector<int>&);

void printReverse(const vector<int>&);

void replace(vector<int>&, int i, int value);

void replace2(vector<int>&, int old, int value);

int main(){
	vector<int> first;
	for(int i = 1; i < 11; i++)
	first.push_back(i);

	cout << *first.begin() << endl;
	cout << &first +1<< endl;

	for(unsigned int i = 0; i < first.size(); i++)
	cout << first[i] << " ";
	cout << endl;

	first.insert(first.begin() + 4, 11);
	for(unsigned int i = 0; i < first.size(); i++)
	cout << first[i] << " ";
	cout << endl;

	first.erase(first.begin() + 4);
	for(unsigned int i = 0; i < first.size(); i++)
	cout << first[i] << " ";
	cout << endl;
	
	cout << first.empty() << endl;

	//first.clear();
	//cout << first.empty() << endl;

	vector<int> second;
	fillVector(second);
	printVector(second);
	
	ifEven(first);
	ifEven(second);

	printReverse(first);
	printReverse(second);

	replace(first, 2, 15);
	printVector(first);

	first.push_back(8);
	replace2(first, 8, 100);
	printVector(first);
	
	return 0;
}

void fillVector(vector<int>& a){
	int input;
	cout << "Enter input value: ";
	cin >> input;

	while(input != -1){
	a.push_back(input);
	cout << "Enter next input value or -1 to exit: ";
	cin >> input;
	}
	
}

void printVector(const vector<int>& a){
	for(unsigned int i = 0; i < a.size(); i++)
	cout << a[i] << " ";
	cout << endl;
}

void ifEven(const vector<int>& a){
	for(unsigned int i = 0; i < a.size(); i++){
	if(a[i]%2 == 0)
	cout << a[i] << " ";
	}
	cout << endl;
}

void printReverse(const vector<int>& a){
	for(unsigned int i = a.size(); i > 0; i--){
	cout << a[i - 1] << " ";
	}
	cout << endl;
}

void replace(vector<int>& a, int i, int value){
	a[i] = value;
}

void replace2(vector<int> &a, int old, int value){
	for(unsigned int i = 0; i < a.size(); i++)
	if(a[i] == old){
	a[i] = value;
	//return;
	}
}
