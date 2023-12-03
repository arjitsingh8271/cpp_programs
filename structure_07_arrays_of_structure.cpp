/*
What is an array of structures?
Like other primitive data types, we can create an array of structures. 
*/


#include <iostream>
using namespace std;

struct Point {
	int x, y;
};

int main()
{
	// Create an array of structures
	Point arr[3];

	// Access array members

	// arr[0].x = 10;
	// arr[0].y = 20;
	// arr[1].x = 30;
	// arr[1].y = 40;
	// arr[2].x = 50;
	// arr[2].y = 60;
	//		OR
	arr[0] = {10, 20};
	arr[1] = {30, 40};
	arr[2] = {50, 60};

	cout<<arr[0].x<<" "<<arr[0].y<<endl;
	cout<<arr[1].x<<" "<<arr[1].y<<endl;
	cout<<arr[2].x<<" "<<arr[2].y<<endl;
	return 0;
}



/*
OUTPUT: 10 20
		30 40
		50 60
*/