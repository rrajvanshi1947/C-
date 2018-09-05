#include <iostream>
#include <cassert>

using namespace std;

int main(){
	int i = 5, j = i*i;
	assert(j == 24);
	cout << j << endl;

	return 0;
}
