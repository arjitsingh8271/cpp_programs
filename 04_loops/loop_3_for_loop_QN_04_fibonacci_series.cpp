// fibonacci series :- 0+1=1, 1+1=2, 1+2=3, 2+3=5, 3+5=8, 5+8=13 ......

#include <iostream>
using namespace std;

int main()
{
	int n,nextTerm,t1=0,t2=1;

	cout<<"Enter a fibonacci term: ";
	cin>>n;
	cout<<t1<<endl;
	cout<<t2<<endl;
	for (int i = 2; i < n; i++)
	{
		nextTerm = t1+t2;
		cout<<nextTerm<<endl;
		t1 = t2;
		t2 = nextTerm;
	}
	
	return 0;
}




/*
OUTPUT: Enter a fibonacci term: 5
		0
		1
		1
		2
		3
*/