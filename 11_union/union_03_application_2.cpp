/*
//		USING STRUCTURE

#include <iostream>
using namespace std;
#pragma pack(1)
struct abc
{
	int a;
	char b;
	double c;
};

int main()
{
	abc arr[10];

	arr[0].a = 10;
	arr[1].b = 'A';
	arr[2].c = 10.112;

	cout<<sizeof(arr)<<endl;

	return 0;
}

//	OUTPUT: 130
*/



//		USING UNION.

#include <iostream>
using namespace std;
#pragma pack(1)
union abc
{
	int a;
	char b;
	double c;
};

int main()
{
	abc arr[10];

	arr[0].a = 10;
	arr[1].b = 'A';
	arr[2].c = 10.112;

	cout<<sizeof(arr)<<endl;

	return 0;
}

// OUTPUT: 80
