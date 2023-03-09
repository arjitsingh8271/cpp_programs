// Write a program to print the largest value just after taking 10 inputs from the users

# include <iostream>
using namespace std;

int main()
{
	int num,max=0;
	for(int i=0 ; i<3 ; i++)
	{
		cin>>num;
		if(num > max)
			max = num;
	}

	cout<<"Max: "<<max<<endl;

	return 0;
}