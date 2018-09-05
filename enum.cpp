#include <iostream>

using namespace std;

enum first:char{
	a,b,c,d
};

int main(){
	cout << d << endl;

	first x = d;
	cout << x << endl;

	int i = x;
	cout << i << endl;

	first y = static_cast<first>(i);
	cout << y << endl;
	return 0;
}
