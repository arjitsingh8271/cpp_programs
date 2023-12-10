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
	string name;
	getline(cin,name);  //reading through keybord a line of text.
	//cin>>name; //reading through keybord (one word).
	//cin.get(arr, [100]);   for c_style string : char arr[];
	cout<<endl;
	cout<<"Input name is: "<<name<<endl;
	cout<<"the length of name is: "<<name.length()<<endl;
	cout<<"the size of name is: "<<name.size()<<endl;
	cout<<"the capacity of name is: "<<name.capacity()<<endl;
	cout<<"the maximum size of name is: "<<name.max_size()<<endl;
	cout<<"Empty: "<<(name.empty() ? "yes" : "no")<<endl;

	return 0;
}


/*
OUTPUT:	arjit kumar singh

		Input name is: arjit kumar singh
		the length of name is: 17
		the size of name is: 17
		the capacity of name is: 30
		the maximum size of name is: 4611686018427387903
		Empty: no
*/