# include <iostream>
using namespace std;

class student
{
	public:
		int roll;
		int age;
};

int main()
{
	// Statically memory allocation
	student s1;
	s1.roll=20;
	s1.age=15;
	cout<<s1.roll<<endl;
	cout<<s1.age<<endl;

	//Dynamically memory allocation
	student *s4 = new student;
	s4 -> roll = 50;  // or (*s4).roll = 50;
	s4 -> age = 19;   // or (*s4).age = 19;
	cout<<s4->roll<<endl;
	cout<<s4->age<<endl;

	return 0;
}

