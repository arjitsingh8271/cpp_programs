#include <iostream>
using namespace std;

struct person           // Structure declaration
{
    string name;        // Member (string variable)
    int age;            // Member (int variable)
    double salary;      // Member (double variable)
};                      // Structure variable
    
int main()
{
	person arjit, rahul;
	
    arjit.name = "Arjit";
	arjit.age = 19;
	arjit.salary = 25500;

    rahul.name = "Rahul";
    rahul.age = 25;
    rahul.salary = 32000;

    cout<<arjit.name<<" "<<arjit.age<<" "<<arjit.salary<<endl;

    cout<<rahul.name<<" "<<rahul.age<<" "<<rahul.salary<<endl;

    return 0;
}



/*
OUTPUT: Arjit 19 25500
        Rahul 25 32000
*/