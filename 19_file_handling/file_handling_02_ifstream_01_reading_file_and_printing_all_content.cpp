# include <iostream>
# include <fstream>
using namespace std;

// ifstream is a class and infile is an object

int main()
{
	ifstream infile;
	infile.open("file_01.txt");		// open file having name "file_01.txt"

	string s;
	int x;

	infile>>s;			// sent string content present in file to s
	infile>>x;			// sent integer content present in file to x

	cout<<s<<endl;		// print s
	cout<<x<<endl;		// print x
}



/*
OUTPUT:	Hello
		71
*/