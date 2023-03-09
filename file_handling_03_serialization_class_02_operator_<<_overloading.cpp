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

	friend ofstream & operator << (ofstream &ofs, Student &s);
	friend ifstream & operator >> (ifstream &ifs, Student &s);
	
	~Student(){};
};

ofstream & operator << (ofstream &ofs, Student &s)
{
	ofs<<s.name<<endl;
	ofs<<s.roll<<endl;
	ofs<<s.branch<<endl;

	return ofs;
}

ifstream & operator >> (ifstream &ifs, Student &s)
{
	ifs>>s.name>>s.roll>>s.branch;

	return ifs;
}


int main()
{
	Student s1("Singh", 71, "BCA");

	ofstream of("file_03_student_02.txt");	// Storing the student information in a file
	of<<s1;
	of.close();

	ifstream inf("file_03_student_02.txt");	// Retrieve the information of a student from a file
	inf>>s1;
	cout<<s1.name<<endl;
	cout<<s1.roll<<endl;
	cout<<s1.branch<<endl;
    inf.close();
}



/*
file_03_student_02.txt:	Singh
						71
						BCA

OUTPUT:	Singh
		71
		BCA
*/