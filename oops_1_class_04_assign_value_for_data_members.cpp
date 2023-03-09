# include <iostream>
using namespace std;

class Human
{
public:
	string name;
	string gender;
	int age;

	void display()
	{
		cout<<name<<endl;
		cout<<gender<<endl;
		cout<<age<<endl;
		cout<<endl;
	}
};

int main()
{
	Human man;
	man.name = "Rahul";
	man.gender = "Male";
	man.age = 38;
	man.display();


	Human woman;
	woman.name = "Pooja";
	woman.gender = "Female";
	woman.age = 29;
	woman.display();

}


/* 
OUTPUT: Rahul
		Male
		38

		Pooja
		Female
		29
*/