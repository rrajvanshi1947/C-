#include <iostream>
#include <string>

using namespace std;

template <class T>
class Print{
	public:
	Print(T x){
	cout << x << " is a number" << endl;
	}	
};

template <>
class Print<char> {
	public:
	Print(char x){
	cout << x << " is a character" << endl;	
	}
};

int main(){
	Print<int>(10);
	Print<double>(12.12);
	Print<char>('a');
	return 0;
}
