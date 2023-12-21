#include <iostream>
using namespace std;

// if we don't write using namespace std;
// then every time we have to write
// using std::cout;
// using std::cin;
// using std::endl;
// using std::string;



int main()
{
	string name = "Arjit Kumar Singh";
	
	cout<<"Name is: "					<<name<<endl;
	cout<<"Length of name is: "			<<name.length()<<endl;
	cout<<"Size of name is: "			<<name.size()<<endl;
	cout<<"Capacity of name is: "		<<name.capacity()<<endl;
	cout<<"Maximum size of name is: "	<<name.max_size()<<endl;
	cout<<"Empty: "						<<(name.empty() ? "yes" : "no")<<endl;
	cout<<"After 5th index: "			<<name.substr(6)<<endl;
	cout<<"1st to 4th index: "			<<name.substr(1,4)<<endl;

	return 0;
}


/*
OUTPUT:	Name is: Arjit Kumar Singh
		Length of name is: 17
		Size of name is: 17
		Capacity of name is: 17
		Maximum size of name is: 4611686018427387903
		Empty: no
		After 5th index: Kumar Singh
		1st to 4th index: rjit
*/