#include <iostream>
using namespace std;

struct				// Structure declaration
{
	int roll;       // Member (int variable)
	string name;    // Member (string variable)
} student;

int main(){

	//student.roll = 71;
	//student.name = "Arjit";

	student = {71, "Arjit"};

	cout<<student.roll<<" "<<student.name<<endl;

	return 0;
}



// OUTPUT: 71 Arjit
