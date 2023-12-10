/*
Fibonacci series:-
0th + 1st = 2nd, 1st + 2nd = 3rd, 2nd + 3rd = 4th . . .

0 	1 	1 	2 	3 	5 	8 	13 	21 	34 	54  ...
0th 1st 2nd 3rd 4th 5th 6th 7th 8th 9th 10th

*/


# include<iostream>
using namespace std;

int fibo_term(int n)
{
	if(n <= 1)
		return n;
	return fibo_term(n-1) + fibo_term(n-2);
}

int main()
{
	int n;
	cin>>n;

	cout<<fibo_term(n)<<endl;
}