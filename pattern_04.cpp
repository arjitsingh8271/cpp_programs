/* pattern printing
****
***
**
* 
*/

#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number of lines to print: ";
	cin>>num;

	for(int i=1; i<=num; i++)
	{
		for(int j=num; j>=i; j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

//---------------------OR----------------------------
/*
#include <iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter number of lines to print: ";
	cin>>num;

	for(int i=1; i<=num; i++)
	{
		for(int j=1; j<=num; j++)
		{
			if(i+j<=num)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	return 0;
}
*/