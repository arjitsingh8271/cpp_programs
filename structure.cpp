#include <iostream>

using namespace std;

struct student1         
{
	string name;
	long int roll_number;
	string branch;
}; 

//USING (typedef)

typedef struct student2        // u can use struct without typedef
{
	string name;
	long int roll_number;
	string branch;
}s;                           

int main()
{
	student1 arjit;                             
	arjit.name = ("Arjit Kumar Singh");
	arjit.roll_number = 32301220071;
	arjit.branch = ("BCA");
	
	cout<<"name: "<<arjit.name<<endl;  // output
	cout<<"roll_number: "<<arjit.roll_number<<endl;
	cout<<"branch: "<<arjit.branch<<endl;

	cout<<endl<<"using typedef"<<endl;

	s golu;                             // here s is = struct student2
	golu.name = ("Golu");
	golu.roll_number = 000000;
	golu.branch = ("xyz");
	
	cout<<"name: "<<golu.name<<endl;  // output
	cout<<"roll_number: "<<golu.roll_number<<endl;
	cout<<"branch: "<<golu.branch<<endl;		

	return 0;	
}
