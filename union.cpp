# include <iostream>
using namespace std;

union stud_info     // in 'union' we can use only one variable (int or char or float)
{
	int roll;
	char sec;
	float sgpa;
};

int main()
{
	union stud_info arjit;
	arjit.roll = 71;
	arjit.sec = 'c';
	
	cout<<arjit.sec<<endl;

	return 0;
}