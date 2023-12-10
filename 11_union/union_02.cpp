# include <iostream>
using namespace std;

union stud_info     // in 'union' we can use only one variable (int or char or float)
{
	int roll;
	char sec;
	float cgpa;
};

int main()
{
	union stud_info arjit;
	
	arjit.roll = 71;
	arjit.sec = 'c';
	arjit.cgpa = 9.3f;			// it only store the last member values 

	cout<<arjit.roll<<endl;
	cout<<arjit.sec<<endl;
	cout<<arjit.cgpa<<endl;

	return 0;
}



/*
OUTPUT: 1091882189                                                            

		9.3
*/