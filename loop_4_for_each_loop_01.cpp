/*
for-each loop

syntax: for(type variable_name : array/vector_name)
{
    loop statements
    ...
}

*/

#include<iostream>
using namespace std;

int main()
{
	int a[6] = {1,2,3,4,5,6};

	for(int x:a)
	{
		cout<<x<<endl;
	}
	cout<<endl;

	float b[6] = {1.2,3.2,5.5,6.32,.23,1.001};
	for(float y:b)
	{
		cout<<y<<endl;
	}

	return 0;
}




/*
OUTPUT: 1
		2
		3
		4
		5
		6

		1.2
		3.2
		5.5
		6.32
		0.23
		1.001
*/