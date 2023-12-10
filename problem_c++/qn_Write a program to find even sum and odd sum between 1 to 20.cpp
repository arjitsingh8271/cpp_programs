// Write a program to find even sum and odd sum between 1 to 20.

# include <iostream>
using namespace std;

int main()
{
	int even_sum=0, odd_sum=0;
	for(int i=1 ; i<=20 ; i++)
	{
		if(i%2==0)
			even_sum = even_sum + i;
		else
			odd_sum = odd_sum + i;
	}

	cout<<"Even sum: "<<even_sum<<endl;
	cout<<"Odd sum: "<<odd_sum<<endl;

	return 0;
}