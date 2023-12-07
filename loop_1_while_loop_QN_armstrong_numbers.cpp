/*
Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

	1 = 1^3
	153 = 1^3 + 5^3 + 3^3
	..
	..
*/

# include<iostream>
using namespace std;

int main()
{
	int n, digit=0, amst=0;
	cin>>n; 
	int temp=n;

	while(n>0)
	{
		digit=n%10;
		n/=10;
		amst += digit*digit*digit;
	}

	if(temp==amst)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;	
		
	return 0;
}



/*
OUTPUT: 153
		Yes

		1634
		No
*/