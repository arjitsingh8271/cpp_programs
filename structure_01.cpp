#include <iostream>
using namespace std;

struct person       // Structure declaration
{
    string name;    // Member (string variable)
    int age;        // Member (int variable)
    double salary;   // Member (double variable)
};                  // Structure variable

int main()
{
	person arjit, rahul;
	
    arjit.name = "Arjit Kumar Singh";
	arjit.age = 19;
	arjit.salary = 25500;

    rahul.name = "Rahul Roy";
    rahul.age = 25;
    rahul.salary = 32000;

    cout<<arjit.name<<endl;
    cout<<arjit.age<<endl;
    cout<<arjit.salary<<endl;

    cout<<rahul.name<<endl;
    cout<<rahul.age<<endl;
    cout<<rahul.salary<<endl;

    return 0;
}