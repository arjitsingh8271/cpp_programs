#include<iostream>
#include<string>
using namespace std;

class Human
{
	private:
		string name();
		int age;
		string gender();
	public:
		void setData(string name1(), int a2, string gender1())
		{
			name() = name1();
			age = a2;
			gender() = gender1();
		}
		void IntroduceSelf()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			cout<<"Gender: "<<gender<<endl;
			cout<<endl;
		}
};

//void Human :: setData(char* a1, int a2, char* a3)

int main()
{
	Human man;
	man.setData("Adam");
	man.setData(30);
	man.setData("Male");

	Human women;
	women.setData("Eve");
	women.setData(28);
	women.setData("Female");

	Human child;
	child.setData("Baby");
	child.setData(5);
	child.setData("Female");

	man.IntroduceSelf();
	women.IntroduceSelf();
	child.IntroduceSelf();

	return 0;
}