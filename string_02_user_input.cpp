#include <iostream>
using namespace std;

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
	cout<<"Input name is: "<<name<<endl;
	cout<<"the length of name is: "<<name.length()<<endl;
	cout<<"the size of name is: "<<name.size()<<endl;
	cout<<"the capacity of name is: "<<name.capacity()<<endl;
	cout<<"the maximum size of name is: "<<name.max_size()<<endl;
	cout<<"Empty: "<<(name.empty() ? "yes" : "no")<<endl;

	return 0;

}