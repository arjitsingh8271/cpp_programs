#include <iostream>
using namespace std;

struct{
	int roll;
	string name;
} student_1, student_2;

int main(){
	student_1.roll = 71;
	student_1.name = "Arjit";

	student_2.roll = 72;
	student_2.name = "Rahul";

	cout<<student_1.roll<<" "<<student_1.name<<endl;
	cout<<student_2.roll<<" "<<student_2.name<<endl;

	return 0;
}



/*
OUTPUT: 71 Arjit
		72 Rahul
*/