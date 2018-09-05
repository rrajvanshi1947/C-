#include<iostream>
#include<vector>
#include<cstring>
#include<sstream>
#include<stdlib.h>
using namespace std;

class shiftreg
{
	int myargc;
	char**myargv;
	vector<char> reg = {'0'};
	int no_of_bits=1;
	public: shiftreg(int argc, char**argv);	
		int initialize_reg(int pos);
		int regsize(int pos);
		int shift_right(int pos);
		int shift_left(int pos);
		int refill_vacants();
		int print();
};

shiftreg::shiftreg(int argc, char**argv)
{
	myargc = argc;
	myargv = argv;
}

int shiftreg::initialize_reg(int pos)
{
	string str1;
	str1 = myargv[pos];
	no_of_bits = str1.length();
	reg.resize(no_of_bits);
	for(int i=0; i<no_of_bits; i++)
	{
		reg[i] = str1[i];
	}
	return 0;
}

int shiftreg::regsize(int pos)
{
	string str1 = myargv[pos];
	stringstream stoi(str1);	
	int z;
	int y = reg.size();
 	stoi>>no_of_bits;
	z = no_of_bits-y;
	//cout<<"no of bits :"<<no_of_bits<<endl;
	if(no_of_bits > reg.size())
	{
		reg.insert(reg.begin(),z,'0');
		reg.resize(no_of_bits);
	}
	else if(no_of_bits < reg.size())
	{
		cout<<"Register size is less than input bit size"<<endl;
		return -1;
	}
	
	else if(no_of_bits==y)
	{
		reg.resize(no_of_bits);
	}
	return 0;	
}

int shiftreg::shift_left(int pos)
{
	reg.resize(no_of_bits);
	for(int j=0; j<pos; j++)
	{	
		for (int i=0; i<=no_of_bits-1; i++)
        	{
			reg[i] = reg[i+1];
			//cout<<"for"<<i<<"reg"<<reg[i]<<endl;
		}
		reg[(no_of_bits-1)] = 'k';
		//cout<<endl;
	}
	reg.resize(no_of_bits);
	return 0;
}

int shiftreg::shift_right(int pos)
{	
	if(pos>0)
	{
		reg.resize(no_of_bits);
		for(int j=0; j<pos; j++)
		{
			for (int i=reg.size()-1; i>=0; i--)
			{
			    reg[i] = reg[i-1];
			    //cout<<"for"<<i<<"reg"<<reg[i]<<endl;
			}
			reg[0] = 'k';
			//cout<<endl;
		}
	}
	else
	{
		return -1;
	}
	return 0;
}

int shiftreg::refill_vacants()
{
	for(int i=no_of_bits-1; i>=0; i--)
	{
		if((reg[i]) == 'k')
		{
			reg[i] = '1';
		}
	}
	
	return 0;
}

int shiftreg::print()
{
	for(int i=0; i<no_of_bits; i++)
	{
		if(reg[i] == 'k')
		{
			reg[i] = '0';
		}
		cout<<reg[i];
	}
	cout<<endl;
	return 0;
}


int main(int argc, char**argv)
{
	shiftreg obj1(argc,argv);
	int n=0;
	
	for(int i=1; i<argc; i++)
	{
		if(string(argv[i]) == string("-i"))
		{
			n=1;
		}
		else if(string(argv[i]) == string("-s"))
		{
			n=2;
		}
		else if(string(argv[i]) == string("-r"))
		{
			n=3;
		}
		else if(string(argv[i]) == string("-l"))
		{
			n=4;
		}
		else if(string(argv[i]) == string("-v"))
		{
			n=5;
		}
		else if(string(argv[i]) == string("-p"))
		{
			n=6;
		}
		else
			n=7;

		switch(n)
		{
			case 1: {
				//	cout<<"case i assigned"<<endl;
					int x = (i+1);
					obj1.initialize_reg(x);
				}
				break;
			case 2:	{
				//	cout<<"case s assigned"<<endl; 
					int x = (i+1);
					int ret = obj1.regsize(x);
					if(ret == -1)
					{
						cout<<ret<<endl;
						return ret;
					}
				}
				break;
			case 3: {
				//	cout<<"case r assigned"<<endl;
					string str1=argv[i+1];
					stringstream stoi(str1);
					int x=0;
					stoi>>x;
					if(x>0)
					{
						obj1.shift_right(x);
					}
					else
					{
						cout<<"shift should be positive"<<endl<<"-1"<<endl;
						return -1;
					}
				}
				break;
			case 4: {
				//	cout<<"case l assigned"<<endl;
					string str1=argv[i+1];
					stringstream stoi(str1);
					int x=0;
					stoi>>x;
					if(x>0)
					{
						obj1.shift_left(x);
					}
					else
					{
						cout<<"shift should be positive"<<endl<<"-1"<<endl;
						return -1;
					}
				}
				break;
			case 5: {
					//cout<<"case v assigned"<<endl;
					if(string(argv[i+1]) == string("0") || string(argv[i+1]) == string("1"))
					{
							obj1.refill_vacants();
					}
					
					else
					{
						cout<<"register contains 0 or 1 only"<<endl<<"-1"<<endl;
						cout<<endl;
						return -1;
					}
				}
				break;
			case 6:	//cout<<"case p assigned"<<endl;
				obj1.print();
				break;
			/*case 7: {
					cout<<"invalid case"<<endl<<"-1"<<endl;
					return -1;
				}
				break;*/
		}
	}
	cout<<"0"<<endl;	
	return 0;
}
