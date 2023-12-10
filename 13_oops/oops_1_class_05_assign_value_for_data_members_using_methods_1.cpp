# include <iostream>
using namespace std;

class Human
{
public:
	string name;
	string gender;
	int age;

	void setName(string a)
	{
		name = a;
	}

	void setGender(string b)
	{
		gender = b;
	}

	void setAge(int c)
	{
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
	man.setName("Rahul");
	man.setGender("Male");
	man.setAge(38);
	man.display();


	Human woman;
	woman.setName("Pooja");
	woman.setGender("Female");
	woman.setAge(29);
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