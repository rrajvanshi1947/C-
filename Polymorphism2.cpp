#include <iostream>
#include <string>

using namespace std;

class Surname{
	public:
	virtual void printSurname() = 0; //Pure virtual function
};

class Sangal: public Surname{    //Abstract Class
	public:	
	void printSurname(){
	cout << "Our surname is Sangal" << endl;
	}

};

class Aggarwal: public Surname{
	public:	
	void printSurname(){
	cout << "Our surname is Aggarwal" << endl;
	}

};

int main(){
	Sangal Steel;
	Surname *Pointer1 = &Steel;
	Pointer1 -> printSurname(); 

	Aggarwal Telecom;
	Surname *Pointer2 = &Telecom;
	Pointer2 -> printSurname();
	



	return 0;
}
