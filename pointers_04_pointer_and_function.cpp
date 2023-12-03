#include<iostream>
using namespace std;

int max (int x, int y)
{
	return x>y?x:y;
}

int min (int x, int y)
{
	return x<y?x:y;
}


int main()
{
	int (*p) (int, int);

	p = max;
	//(*p) (10,5);
	int num1 = p(10,5);

	p = min;
	//(*p) (10,5);
	int num2 = p(10,5);

	cout<<num1<<endl;
	cout<<num2<<endl;

	return 0;
}



/*
OUTPUT: 10
		5
*/