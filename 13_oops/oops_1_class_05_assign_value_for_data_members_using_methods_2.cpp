# include <iostream>
using namespace std;

class Human
{
public:
	string name;
	string gender;
	int age;

	void set(string a, string b, int c)
	{
		name = a;
		gender = b;
		age = c;
	}

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
	man.set("Rahul", "Male", 38);
	man.display();


	Human woman;
	woman.set("Pooja", "Female", 29);
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