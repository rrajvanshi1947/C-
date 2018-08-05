#include <iostream>
#include <string>

using namespace std;

class Father{
	public:
		Father(){
	cout << "Always remember your father, my son." << endl;
	}
	        void random(int x, int y, int z){
	a = x;
	b = y;
	c = z;	
	}

		~Father(){
	cout << "Goodbye son." << endl;
	}

	int z;

		void returnValues(){
	cout << a << endl;	
	cout << b << endl;
	cout << c << endl;
	}
	protected:
	int d;
	void printSth(){
	cout << "Hello there!" << endl;
	}
	private:
		int a, b, c;


};

class Son:public Father
{
	public:
	Son(){
	cout << "I'm the son" << endl;
	};

	~Son(){
	cout << "I wanna do sth else." << endl;
	}
	
	int setD(int x){
	d = x;
	return d;
	}

	void callPrintSth(){
	printSth();
	}
};

int main(){
	Son first;
	first.random(3, 4, 5);
	first.returnValues();
	first.callPrintSth();
	cout << first.setD(10) << endl;
	first.z = 14;
	cout << first.z << endl;

	return 0;
}
