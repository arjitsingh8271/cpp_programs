# include <iostream>
# include <cstring>
using namespace std;

int main()
{
	char str1[20];
	char str2[20];
	char str3[20];

	cout<<"Enter 1st string: "<<endl;
	cin.getline(str1,20);

	cout<<"Enter 2nd string: "<<endl;
	cin.getline(str2, 20);

	cout<<"Enter 3nd string: "<<endl;
	cin.getline(str3, 20);

	strcat(str1, str2);  // Concatenating string str1 + str2 = str1;
	strcat(str1, str3);	 // Concatenating string str1 + str2 = str1 + str3 = str1;



	cout<<"Concatenating 1st string is: "<<str1<<endl;
	cout<<"2st string is: "<<str2<<endl;
	cout<<"3st string is: "<<str3<<endl;

	return 0;
}