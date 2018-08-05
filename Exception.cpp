#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int mage = 50;
	int sage = 51;

	try{
	if(sage > mage)
	throw 42;	
	}catch(int x){		//or catch(...) for default exception
	cout << "Son can't be older than his mom \nError Code: " << x << endl;
	}
	return 0;
}
