# include <iostream>
using namespace std;

void fun(int i, int n)
{
	if(i>n)
		return;
	else
	{
		cout<<i<<" ";
		fun(i+1, n);
	}
}

int main()
{
	int i,n;
	cin>>i>>n;

	fun(i, n);
	cout<<endl;

	return 0;
}



/*	Examine

let i=3, n=5 	|	O/p: 3 4 5

if(3>5) No
---
print(i)	(3)
f(3+!, 5)
	
	if(4>5) No
	---
	print(i)	(4)
	f(4+1, 5)

		if(5>5) No
		---
		print(i)	(5)
		f(5+!, 5)

			if(6>5) Yes
			return
*/