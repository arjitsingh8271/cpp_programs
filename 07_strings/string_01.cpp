#include <iostream>
using namespace std;

int main()
{
	string name = "Arjit Singh";
	name = "golu";

	cout<<"Name is: "<<name<<endl;		// -> golu
	cout<<name[0]<<endl;				// -> g
	
	//string name;
	//getline(cin,name);  	//reading through keybord a line of text.
	
	//cin>>name; 			//reading through keybord (one word).
	
	//char arr[];
	//cin.get(arr, [100]);  //for c_style string : char arr[];

	return 0;
}
