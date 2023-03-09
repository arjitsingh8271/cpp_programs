/*
Serialization:

Serialization is the process of storing and retrieving the state of an object. Suppose 
we want to store the student information in a file and again we want to retrieve the 
information of a student from a file. While working with Serialization the class must have 
a default constructor. For a better understanding, please have a look at the following example.
*/


# include <iostream>
# include <fstream>
using namespace std;

class Student
{
	public:
	string name;
	int roll;
	string branch;

	Student(string name, int roll, string branch)
	{
		this-> name = name;
		this-> roll = roll;
		this-> branch = branch;
	}

	~Student(){};
};

int main()
{
	Student s1("Arjit Kumar Singh", 71, "BCA");

	ofstream of("file_03_student_01.txt");	// Storing the student information in a file
	of<<s1.name<<endl;
	of<<s1.roll<<endl;
	of<<s1.branch<<endl;

	of.close();


	ifstream inf("file_03_student_01.txt");	// Retrieve the information of a student from a file
	string s;
	while(getline(inf, s))
		cout<<s<<endl;
	inf.close();
}



/*
file_03_student_01.txt:	Arjit Kumar Singh
						71
						BCA

OUTPUT:	Arjit Kumar Singh
		71
		BCA
*/