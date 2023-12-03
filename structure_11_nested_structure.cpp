/* 
When a structure contain another structure, it is called nested structure.
A structure consisting of complex element is called a complex structure.
*/
#include <iostream>
using namespace std;

struct address
{
	string dist;
	string state;
	int pin_code;
};

struct emp
{
	int emp_id;
	string name;
	address add;	// Nested structure
};

void printData(emp e)
{
	cout<<"Emp_id: "<<e.emp_id<<endl;
	cout<<"Name: "<<e.name<<endl;
	cout<<"Pin_code: "<<e.add.pin_code<<endl;
	cout<<"Distict: "<<e.add.dist<<endl;
	cout<<"State: "<<e.add.state<<endl;
}

int main()
{
	emp e1;

	e1.emp_id = 101;
	e1.name = "Raftaar";

	e1.add.pin_code = 713206;
	e1.add.dist = "Durgapur";
	e1.add.state = "West-Bengal";

	printData(e1);

	return 0;
}



/*
OUTPUT: Emp_id: 101                                                           
		Name: Raftaar
		Pin_code: 713206
		Distict: Durgapur
		State: West-Bengal
*/