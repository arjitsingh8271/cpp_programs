/*
Because of structure padding, size of the structure becomes
more than the size of the actual structure. Due to this some
memory will get wasted

In Structure packing memory will be save but, CPU cycle is increases
*/


#include <iostream>
using namespace std;

#pragma pack(1)

struct abc
{
	char a;		// 1 byte
	char b;		// 1 byte
	int c;		// 4 byte
};

int main()
{
	abc var;
	cout<<sizeof(var)<<endl;
}


// OUTPUT: 6


/*
#include <iostream>
using namespace std;
#pragma pack(push, 1)

struct abc
{
	char a;		// 1 byte
	int c;		// 4 byte
	char b;		// 1 byte
};

int main()
{
	abc var;
	cout<<sizeof(var)<<endl;
}
#pragma pack(pop) // Reset to default alignment

// OUTPUT: 6
*/