/*Given a class named DayOfTheYear with data members month and day,
their respective set and get functions; and the class time containing hour, minutes, secs
and the respective set/get functions define a new class name TimeAndDate that precisely
defines a given calendar year, the month and day and the time. (Hint use inheritance)*/

#include <iostream>

using namespace std;

class DayOfTheYear{
	public:
	DayOfTheYear(){}				//how to know which year

	void setMonth(string m){
	month = m;
	}
	void getMonth(){
	cout << month << " ";
	}

	void setDay(int d){
	day = d;
	}
	void getDay(){
	cout << day << " ";
	}

	protected:
	string month;
	int day;

};

class Time{
	public:
	Time(){}
	
	void setHour(int h){
	hour = h;
	}
	void getHour(){
	cout << hour << " ";
	}

	void setMinutes(int m){
	minutes = m;
	}
	void getMinutes(){
	cout << minutes << " ";
	}

	void setSeconds(int s){
	seconds = s;
	}
	void getSeconds(){
	cout << seconds << " ";
	}

	protected:
	int hour, minutes, seconds;
};

class TimeAndDate : public DayOfTheYear, public Time
{
	public:
	TimeAndDate(){}
	TimeAndDate(int y){
	year = y;
	}

	void printDateTime(){
	cout << "The set date and time is: "<< year << " ";// << getMonth() << getDay() << getHour() << getMinutes() << getSeconds << endl; 
	getMonth();
	getDay();
	getHour();
	getMinutes();
	getSeconds();
	cout << endl;
	}

	private:
	int year; 
};

int main(){

	TimeAndDate Test(1991);
	Test.setMonth("May");
	Test.setDay(25);
	Test.setHour(04);
	Test.setMinutes(45);
	Test.setSeconds(43);
	Test.printDateTime();

	return 0;
}
