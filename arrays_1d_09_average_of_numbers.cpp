#include<iostream>
using namespace std;

int main()
{
	
	float sum=0,marks[5],avg;
	

	for (int i = 0; i < 5; i++)
	{
		cin>>marks[i];
	}

	for (int i = 0; i < 5; i++)
	{
		sum = sum + marks[i];
	}

	avg = sum / 5;

	cout<<"Total sum is "<<sum<<endl;
	cout<<"Average is   "<<avg<<endl;

	return 0;
}
