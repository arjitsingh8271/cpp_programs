# include <iostream>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];

	cout<<"Enter 1st string: "<<endl;
	cin.getline(str1,20);

	cout<<"Enter 2nd string: "<<endl;
	cin.getline(str2, 20);

	cout<<"1st string is: "<<str1<<endl;
	cout<<"2st string is: "<<str2<<endl;

	return 0;
}