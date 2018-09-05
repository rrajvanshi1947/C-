#include <iostream>

using namespace std;

enum Seasons{
	Spring, Summer, Autumn, Winters
};

string whichSeason(Seasons x){
	switch(x){
	case Spring:
	cout <<"Spring";
	
	case Summer:{
	cout <<"Summer";
	cout << "asfjbjk";}
	break;
	case Autumn:
	cout <<"Autumn";
	break;
	case Winters:
	cout <<"Winters";
	break;
	}
}

int main(){
	Seasons first = Autumn;

	cout << first << endl;

	int i = first;
	cout << i << endl;

	first = static_cast<Seasons>(i);
	cout << first << endl;

	 whichSeason(Summer);

	return 0;
}

