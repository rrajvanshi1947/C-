#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void displayItems(int x);
int choice;

int main(){
	
	
	cout << "Enter 1 to display energising items" << endl;
	cout << "Enter 2 to display harmful items" << endl;
	cout << "Enter 3 to display neutral items" << endl;
	cout << "Enter 4 to exit" << endl;

	cin >> choice;

	while(choice != 4){
	displayItems(choice);

	cout << "Enter 1 to display energising items" << endl;
	cout << "Enter 2 to display harmful items" << endl;
	cout << "Enter 3 to display neutral items" << endl;
	cout << "Enter 4 to exit" << endl;
	cin >> choice;
	}




	return 0;
}

void displayItems(int x){
	ifstream objectList("Items.txt");
	string feature;
	int power;
	



	switch(x){

	case 1:
	while(objectList >> feature >> power){
	if(power > 0)
	cout << feature << " " << power << endl;
	}
	break;	

	case 2:
	while(objectList >> feature >> power){
	if(power < 0)
	cout << feature << " " << power << endl;
	}
	break;

	case 3:
	while(objectList >> feature >> power){
	if(power == 0)
	cout << feature << " " << power << endl;
	}
	break;


	
	}

}
