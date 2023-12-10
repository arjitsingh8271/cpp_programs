// Arrays using loops

#include<iostream>
using namespace std;

int main()
{
	int i=0,marks[4] = {25,12,14,35};

	cout<<"Using for loop:"<<endl;
	for (i = 0; i < 4; i++)
	{    
		cout<<"The value of marks "<<i<<" "<<marks[i]<<endl;
	}
	
	// cout<<"Using while loop:"<<endl;  
	// while(i<4)                    
	// {
	// 	cout<<marks[i]<<endl;
	// 	i++;
	// }
	
	// cout<<"Using do-while loop:"<<endl;
	// do
	// {
	// 	cout<<marks[i]<<endl;
	// 	i++;
	// }while(i<4);

	// cout<<"for each loop:"<<endl;
	// for (int x:marks)
	// {
	// 	cout<<x<<endl;
	// }

	// return 0;
}