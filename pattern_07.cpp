/* pattern printing
    *
   * *
  * * *
 * * * *
* * * * * 

*/

#include <iostream>
using namespace std;

int main()
{
	int line;

	cout<<"Enter no. of line:";
	cin>>line;

	for (int i = 1; i <= line; i++)
	{
		for (int j = 1; j <= line-i ; j++)
		{
			cout<<" ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout<<"* ";
		}

		cout<<endl;
	}

	return 0;
}