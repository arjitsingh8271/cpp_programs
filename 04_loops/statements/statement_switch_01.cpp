#include <iostream>
using namespace std;

int main()
{
	char opt; 
	float n1, n2;
	
	cout<<"Select Operator (+, -, *, /): ";
	cin>>opt;

	cout<<"Enter both no. :";
	cin>>n1>>n2;

	switch (opt)
	{
		case '+':
			cout<<n1+n2<<endl;
			break;

		case '-':
			cout<<n1-n2<<endl;
			break;
		
		case '*':
			cout<<n1*n2<<endl;
			break;
		
		case '/':
			cout<<n1/n2<<endl;
			break;

		default:
            // operator is doesn't match any case constant (+, -, *, /)
            cout<<"Error! The operator is not correct"<<endl;
            break;
	}

	return 0;
}



/*
OUTPUT: Select Operator (+, -, *, /): *                                             
		Enter both no. :2 3
		6
*/