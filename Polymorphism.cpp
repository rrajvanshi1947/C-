#include <iostream>
#include <string>

using namespace std;

class Birthday{
		public:
			Birthday(string a, float x, int y, int z)
			:month(x), day(y), year(z), name(a)
			{}

			Birthday(){}

			void setDOB(int x, int y, int z){
			month = x;
			day = y;
			year = z;
			}

		void printBirth(){
			if (month >= 10)
			cout << name << "'s birthday is on " << month << "/" << day << "/" << year << "." << endl;
			else
			cout << name << "'s birthday is on " << "0" << month << "/" << day << "/" << year << "." << endl;
					}

		protected:
			int month, day, year;
			string name;

};

class Boy:public Birthday
{
		public:	
		void print(string x){
		cout << x << "'s birthday is on " << month << "/" << day << "/" << year << "." << endl;
		int a;
}

};

class Transgender{
	public:
	void print(){
	cout << "Hello" << endl;	
	}
	};


class Girl:public Birthday, public Transgender{
		public:	
		void print1(string x){
		cout << x << "'s birthday is on " << month << "/" << day << "/" << year << "." << endl;
		}	

};





int main(){
	Birthday Test("Roopam", 05, 25, 1991);
	Test.printBirth();

	Boy Akash;
	/*Birthday *Pointer = &Akash;
	Pointer -> setDOB(12, 25, 1996); */
	Akash.setDOB(12, 25, 1996);
	Akash.print("Akash");

	Girl Radhika;
	Radhika.setDOB(10, 27, 1993);
	Radhika.print1("Radhika");
	Radhika.print();
	





	return 0;
}
