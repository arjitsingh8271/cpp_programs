// Arrays

#include <iostream>
using namespace std;

int main()
{
	int marks[] = {25,12,14,35};  // also marks[4] = {25,12,14,35};

	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;

	cout<<"Changing marks[2] and [3] value then:"<<endl;
	marks[2] = 45;
	marks[3] = 55;
	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;

	return 0;
}