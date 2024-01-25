# include <iostream>
using namespace std;

class fibonacci
{
	int num1 = 0;
	int num2 = 1;
	int num3;

	public:	
		void get_series(int n);
};

void fibonacci :: get_series(int n)
{
	if (n)

	cout<<num1<<" ";
	cout<<num2<<" ";
			
	for(int i=2 ; i<n ; i++)
	{
		num3 = num1 + num2;
				
		cout<<num3<<" ";
				
		num1 = num2;
		num2 = num3;
	}

	cout<<endl;
}


int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;
	cout<<"Output:"<<endl;
	
	fibonacci f1, f2;
	f1.get_series(num);
	f2.get_series(8);

	return 0;
}


/*
Input: 5
Output: 
0 1 1 2 3
0 1 1 2 3 5 8 13
*/