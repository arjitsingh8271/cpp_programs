#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	infile.open("my.txt");

	string str;
	int x;

	infile>>str;
	infile>>x;

	cout<<str<<endl;
	cout<<x<<endl;

}