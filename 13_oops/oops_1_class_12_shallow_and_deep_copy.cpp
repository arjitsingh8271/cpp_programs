# include <iostream>
# include <cstring>
using namespace std;

class Student
{
	int roll;
	char *name;

	public :
		Student(int roll, char *name)
		{
			this -> roll = roll;
			// Shallow Copy
			//this -> name = name;
			// Deep Copy
			this -> name = new char[strlen(name)+1];
			strcpy(this -> name, name); 
		}

		void display()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll: "<<roll<<endl;
		}
};

int main()
{
	char name[] = "Arjit";
	Student s1(20, name);
	s1.display();

	name[2] = 'p';
	Student s2(12, name);
	s2.display();

	s1.display();


}