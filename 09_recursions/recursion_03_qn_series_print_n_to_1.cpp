# include<iostream>
using namespace std;

void series_print(int n)
{
	if(n==0)
		return;
	else
	{
		cout<<n<<" ";
		series_print(n-1);
	}
}

int main()
{
	int n;
	cin>>n;
	series_print(n);

	cout<<endl;

	return 0;
}



/*	Examine

let n=4

if(4==0) No
	----
print(4)
f(4-1)

	if(3==0) No
		----
	print(3)
	f(3-1)

		if(2==0) N0
			----
		print(2)	
		f(2-1)

			if(1==0) No
				---
			print(1)
			f(1-1)

				if(0==0) yes
					return   ----^
*/