/* pattern   to print hollow rectangle,square 
****
*  *
*  *
*  *
****
*/

#include <iostream>
using namespace std;

int main()
{
	int i,j,row,colounm;
	cout<<"Enter row and colounm: ";
	cin>>row>>colounm;

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=colounm;j++)
		{
			if ((i==1) || (i==row) || (j==1) || (j==colounm))
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}

	
	return 0;
}