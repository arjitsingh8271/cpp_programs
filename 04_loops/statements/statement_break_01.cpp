/*
Break:
The break statement terminate the loop when it is encounter.
*/

#include <iostream>
using namespace std;

int main()
{
	for(int i=1 ; i<=5 ; i++)
	{
		if(i==3)
			break;

		cout<<i<<endl;
	}

	cout<<"End"<<endl;

	return 0;
}


/*
OUTPUT: 1
        2
        End
*/