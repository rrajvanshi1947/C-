#include <iostream>
#include <string>

using namespace std;

class Constant
	{
	public:
		void printSth() const{
		cout << "Hello" << endl;
	} 	

		void printSth2(){
		cout << "Hello" << endl;
	}

	
		
		friend void callConstant(Constant &a){
		a.printSth();
		
		
	}


}; 

int main() {

	Constant a;
	a.printSth();
	
	callConstant(a);





	return 0;
}
