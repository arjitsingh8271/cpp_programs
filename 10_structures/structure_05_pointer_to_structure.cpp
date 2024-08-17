#include <iostream>
using namespace std;

struct student
{
	int roll;
	string name;
};

int main()
{
	student *p, s1;
	p = &s1;

	// cout<<"Enter roll: ";
	// cin>>p->roll;				//p->roll is same as (*p).roll
	// cout<<"Enter name: ";
	// cin>>(*p).name;

	p->roll = 71;
	p->name = "Arjit";

	cout<<(*p).roll<<" "<<p->name<<endl;

	return 0;
}



/*
OUTPUT: Enter roll: 71
		Enter name: Arjit
		71 Arjit
*/