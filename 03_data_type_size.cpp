/*
sizeof() is a in-build function in c++ thats return size of data type in bytes.
*/

# include <iostream>
using namespace std;

int main()
{

	cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
	cout<<"float: "<<sizeof(float)<<" bytes"<<endl;
	cout<<"double: "<<sizeof(double)<<" bytes"<<endl;
	cout<<"string: "<<sizeof(string)<<" bytes"<<endl;
	cout<<"char: "<<sizeof(char)<<" byte"<<endl;
	cout<<"bool: "<<sizeof(bool)<<" byte"<<endl;
	

	return 0;
}



/*
OUTPUT: int: 4 bytes
		float: 4 bytes
		double: 8 bytes
		string: 32 bytes
		char: 1 byte
		bool: 1 byte
*/