/*
Continue:
The continue statement is used to skip the current iteration of the loop 
and control of the program goes to next iteration.
			OR
The continue statement is used to skip the current iteration and
move to the next iteration of the loop.
*/

#include <iostream>
using namespace std;

int main()
{
	for(int i=1 ; i<=5 ; i++)
	{
		if(i==3)
		continue;

		cout<<i<<endl;
	}

	cout<<"End"<<endl;

	return 0;
}


/*
OUTPUT: 1
        2
        4
        5
        End
*/