#include <iostream>
using namespace std;

int main()
{
	int num, sum=0;

	for(int i=1 ; i<=3 ; i++)
	{
		cout<<"Enter non-negative no.: "<<endl;
		cin>>num;

		if(num < 0)
			goto next;

		sum += num;
	}

	next:
		cout<<"Sum: "<<sum<<endl;


	return 0;
}


/*
OUTPUT: Enter non-negative no.: 
		4
		Enter non-negative no.: 
		-2
		You Enter a -ve no.
		Sum: 4
*/