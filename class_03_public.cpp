#include<iostream>
using namespace std;

class Human
{
	public:
		string name;
		int age;
		string gender;

		void IntroduceSelf()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Gender: "<<gender<<endl;
			cout<<endl;
		}
};

int main()
{
	Human man;
	man.name = "Adam";
	man.age = 30;
	man.gender = "Male";

	Human women;
	women.name = "Eve";
	women.age = 28;
	women.gender = "Female";

	Human child;
	child.name = "Baby";
	child.age = 5;
	child.gender = "Female";

	man.IntroduceSelf();
	women.IntroduceSelf();
	child.IntroduceSelf();

	return 0;
}