# include <iostream>
#include <cstring>
using namespace std;

int main()
{	
	int len1,len2,i;
	char str1[20];
	char str2[20];

	cout<<"Enter 1st string: "<<endl;
	cin.getline(str1, 20);
	
	cout<<"Enter 2st string: "<<endl;
	cin.getline(str2, 20);

	len1 = strlen(str1);
	len2 = strlen(str2);

	for (i = 0; i <= len2; i++)     // concatenating string using loop
	{
		str1[len1+i] = str2[i];
	}

	cout<<"Concatenating 1st string is: "<<str1<<endl;
	cout<<"2st string is: "<<str2<<endl;

	return 0;
}