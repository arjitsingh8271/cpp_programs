/*
#include <iostream>
using namespace std;

struct student
{
	int roll;
	string name;
};

void displayData(student s)
{
	cout<<s.name<<" "<<s.roll<<endl;
}

int main()
{
	student s;

	s.name = "Arjit";
	s.roll = 71;
	
	displayData(s);

	return 0;
}

// OUTPUT: 71 Arjit
*/



#include <iostream>
using namespace std;

struct student
{
	int roll;
	string name;
};

student setData(student s)
{
	cout<<"Enter roll no. : ";
	cin>>s.roll;

	cout<<"Enter name: ";
	cin>>s.name;
	//cin.get(s.name, 20);

	return s;
}

void displayData(student a)
{
	cout<<a.name<<" "<<a.roll<<endl;
}

int main()
{
	student s;
	s = setData(s);
	displayData(s);

	// student temp;
	// temp = setData(s);
	// s = temp;
	// displayData(s);


	return 0;
}


/*
OUTPUT: Enter roll no. : 71
		Enter name: Arjit
		Arjit 71
*/