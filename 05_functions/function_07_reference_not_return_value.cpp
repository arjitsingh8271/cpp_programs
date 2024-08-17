/* 
Fetching the Area of a Circle as a 
Reference Parameter and Not as a Return Value.
*/


# include <iostream>
using namespace std;

const double PI = 3.1416;

void area(double radius, double &result);

int main()
{
	int radius;
	cout<<"Enter radius: ";
	cin>>radius;

	double fetch_area = 0;
	area(radius, fetch_area);

	cout<<"Area of Circle: "<<fetch_area<<endl;

	return 0;
}

void area(double radious, double &result)
{
	result = PI * radious * radious;
}


/*
OUTPUT: Enter radius: 2
		Area of Circle: 12.5664
*/



/*
NOTE: 	A function can return only one value using the 
		return statement. So, if your function needs to 
		perform operations that affect many values required 
		at the caller, passing arguments by reference is 
		one way to get a function to supply those many
		modifications back to the calling module.
*/