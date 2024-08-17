/*

Method 1 (Using Recursion) :
Create a reverse(int n), a recursive function of void type.
Base condition will be : if (n <10)  , then print(n) and return.
Otherwise, print(n%10) and call function reverse(n/10).
 
Time and Space Complexity
Time Complexity : O(d) where, d denotes the number of digits in number n.
Space Complexity : O(1)

*/


# include<iostream>
using namespace std;

int is_rev(int n, int rev)
{
	if (n!=0)
	{
		rev = (rev*10) + (n%10);
		return is_rev(n/10, rev);
	}

	return rev;
}


int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;
	
	cout<<"Output: "<<is_rev(num, 0)<<endl;
}


//-----------------------------------------------------

/*
# include <iostream>
using namespace std;

void is_rev(int n)
{	
	if (n == 0)
		return;
	
	else
	{
		cout<<n%10;
		is_rev(n/10);
	}
}


int main()
{
	int num;
	cout<<"Input: ";
	cin>>num;
	
	cout<<"Output: ";
	is_rev(num);
	cout<<endl;
}

*/



/*
	Input: 1234
	Output: 4321
*/