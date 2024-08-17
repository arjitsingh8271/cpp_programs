# include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Input: ";
	cin>>n;

	for(int i=1 ; i<n ; i++)
	{
		if(i*i <= n)
		{
			if(i*i == n)
			{
				cout<<"Perfect square of "<<i<<endl;
				break;
			}
		}

		else
		{
			cout<<"Not a perfect square."<<endl;
			break;
		}
	}

	return 0;
}



/*
OUTPUT: Input: 33
		Not a perfect square.

		
		Input: 25
		Perfect square of 5
*/