

# include <iostream>
#include <climits>
using namespace std;

int main()
{
	cout<<endl;
	cout<<"int: 			"<< INT_MIN  << " to " << INT_MAX<< endl;
	cout<<"unsigned int: 		"<< UINT_MAX << endl;
	cout<<"short int: 		"<< SHRT_MIN  << " to " << SHRT_MAX<< endl;
	cout<<"unsigned short int: 	"<< USHRT_MAX << endl;
	cout<<"long int: 		"<< LONG_MIN  << " to " << LONG_MAX<< endl;
	cout<<"long long int: 		"<< LONG_LONG_MIN  << " to " << LONG_LONG_MAX<< endl;
	cout<<"unsigned long int: 	"<< ULONG_MAX << endl;
	cout<<"unsigned long long int: "<< ULONG_LONG_MAX << endl;
	cout<<endl;

	cout<<"float: 			"<<sizeof(float)<<" bytes"<<endl;
	cout<<"double: 		"<<sizeof(double)<<" bytes"<<endl;
	cout<<"long double: 		"<<sizeof(long double)<<" bytes"<<endl;
	cout<<endl;

	cout<<"string: 		"<<sizeof(string)<<" bytes"<<endl;
	cout<<endl;

	cout<<"char: 			"<<sizeof(char)<<" byte"<<endl;
	cout<<"wchar_t: 		"<<sizeof(wchar_t)<<" byte"<<endl;
	cout<<endl;

	cout<<"bool: 			"<<sizeof(bool)<<" byte"<<endl;
	

	return 0;
}