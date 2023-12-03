#include <iostream>
using namespace std;

struct{
	int roll;
	string name;
} student;

int main(){

	//student.roll = 71;
	//student.name = "Arjit";

	student = {71, "Arjit"};

	cout<<student.roll<<" "<<student.name<<endl;

	return 0;
}



// OUTPUT: 71 Arjit