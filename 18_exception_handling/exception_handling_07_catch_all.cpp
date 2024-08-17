# include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	cout<<"Enter only Naturan numbers:"<<endl;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>a[i];
		
		try
		{
			if(a[i] <= 0)
				throw 1;
			else if (a[i] == 'a')
				throw 'a';
		}
		catch(...)
		{
			cout<<"!Error Enter only Naturan numbers"<<endl;
		}
		
	}

}