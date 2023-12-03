#include <iostream>
using namespace std;

struct student1         
{
	string name;
	long int roll_number;
	string branch;
}; 


//USING (typedef)
typedef struct student2        // we can use struct without typedef
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
	
	cout<<"name: "<<arjit.name<<endl;
	cout<<"roll_number: "<<arjit.roll_number<<endl;
	cout<<"branch: "<<arjit.branch<<endl;

	cout<<endl<<"using typedef"<<endl;


	// here s is = struct student2
	s golu;                             
	golu.name = ("Golu");
	golu.roll_number = 000000;
	golu.branch = ("xyz");
	
	cout<<"name: "<<golu.name<<endl;
	cout<<"roll_number: "<<golu.roll_number<<endl;
	cout<<"branch: "<<golu.branch<<endl;		

	return 0;	
}




/*
OUTPUT: name: Arjit Kumar Singh
		roll_number: 32301220071
		branch: BCA

		using typedef
		name: Golu
		roll_number: 0
		branch: xyz
*/