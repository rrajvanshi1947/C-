#include <iostream>
#include <string>

using namespace std;

template <class T, class Y>
	class Bigger{
		T first; Y second;

		public:
		Bigger(T x, Y y)
		: first(x), second(y)
		{}		
		
		T larger();

};

template <class T, class Y>
T Bigger<T, Y>::larger(){
		return (first>second?first:second);
} 


int main(){

	Bigger<int, int> Check(121.21, 20.21);
	cout << Check.larger() << endl;;



	return 0;
}
