#include <iostream>

using namespace std;

int changeValue(int x);
int changeValue2(int *x);

int main(){
int a = 1;
int b = 10;

long raj[3] = {1, 2, 3};
long *raj0 = &raj[0];
long *raj1 = &raj[1];
long *raj2 = &raj[2];

cout << raj0 << endl;
cout << raj1 << endl;
cout << raj2 << endl;
cout << &raj0 << endl;
raj0 += 1;
cout << raj0 << endl;
*raj0 += 1;
cout << *raj0 << endl;

cout<< &a << endl;
int *pointer = &a;
cout << pointer << endl;	
cout << *pointer << endl;

cout << &b << endl;

cout << changeValue(a) << endl;
cout << changeValue2(&b) << endl;

cout << a << endl;
cout << b << endl;

cout << &a << endl;
cout << &b << endl;


return 0;
}

int changeValue(int x){
x = 120;
return x;
}

int changeValue2(int *x){
*x = 100;
return *x;
}
