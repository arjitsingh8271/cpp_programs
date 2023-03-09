# include <iostream>
using namespace std;

class Student
{
	int roll;
protected:
	int age;
public:
	Student(int roll, int age)
	{
		this -> roll = roll;
		this -> age = age;
	}
	void display()
	{
		cout<<roll<<endl;
		cout<<age<<endl;
	}
	friend void fun();

};

void fun()
{
	Student s1(10,19);
	s1.display();
}

int main()
{
	fun();
	Student s2(20,16);
	s2.display();
}