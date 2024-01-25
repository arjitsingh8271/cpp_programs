/*
sizeof() is a in-build function in c++ thats return size of data type in bytes.
*/

# include <iostream>
using namespace std;

int main()
{
	cout<<endl;
	cout<<"int: 			"<<sizeof(int)<<" bytes"<<endl;
	cout<<"unsigned int: 		"<<sizeof(unsigned int)<<" bytes"<<endl;
	cout<<"short int: 		"<<sizeof(short int)<<" bytes"<<endl;
	cout<<"unsigned short int: 	"<<sizeof(unsigned short int)<<" bytes"<<endl;
	cout<<"long int: 		"<<sizeof(long int)<<" bytes"<<endl;
	cout<<"long long int: 		"<<sizeof(long long int)<<" bytes"<<endl;
	cout<<"unsigned long int: 	"<<sizeof(unsigned long int)<<" bytes"<<endl;
	cout<<"unsigned long long int: "<<sizeof(unsigned long long int)<<" bytes"<<endl;
	cout<<endl;

	cout<<"float: 			"<<sizeof(float)<<" bytes"<<endl;
	cout<<"double: 		"<<sizeof(double)<<" bytes"<<endl;
	cout<<"long double: 		"<<sizeof(long double)<<" bytes"<<endl;
	cout<<endl;

	cout<<"string: 		"<<sizeof(string)<<" bytes"<<endl;
	cout<<endl;

	cout<<"char: 			"<<sizeof(char)<<" byte"<<endl;
	cout<<"wchar_t: 		"<<sizeof(wchar_t)<<" byte"<<endl;
	cout<<"char16_t: 		"<<sizeof(char16_t)<<" byte"<<endl;
	cout<<"char32_t: 		"<<sizeof(char32_t)<<" byte"<<endl;
	cout<<endl;

	cout<<"bool: 			"<<sizeof(bool)<<" byte"<<endl;
	

	return 0;
}



/*
OUTPUT: 
		int:                    4 bytes
		unsigned int:           4 bytes
		short int:              2 bytes
		unsigned short int:     2 bytes
		long int:               8 bytes
		long long int:          8 bytes
		unsigned long int:      8 bytes
		unsigned long long int: 8 bytes

		float:                  4 bytes
		double:                 8 bytes
		long double:            16 bytes

		string:                 32 bytes

		char:                   1 byte
		wchar_t:                4 byte
		char16_t:               2 byte
		char32_t:               4 byte

		bool:                   1 byte
*/