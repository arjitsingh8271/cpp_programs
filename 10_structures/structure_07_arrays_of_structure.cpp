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
	Point arr[2];

	// Access array members

	// arr[0].x = 10;
	// arr[0].y = 20;
	// arr[1].x = 30;
	// arr[1].y = 40;

	//		OR
	arr[0] = {10, 20};
	arr[1] = {30, 40};

	cout<<arr[0].x<<" "<<arr[0].y<<endl;
	cout<<arr[1].x<<" "<<arr[1].y<<endl;

	return 0;
}



/*
OUTPUT: 10 20
		30 40
*/




//------------------------------------------------------------

/*
struct employee
{
	string name;
	int id;
	double salary;
};

int main()
{
	employee e1[2];

	for (int i=0; i<2 ; i++)
	{
		cout<<"Employee "<<i+1<<endl;
		cin>>e1[i].name;
		cin>>e1[i].id;
		cin>>e1[i].salary;
		cout<<endl;
	}


	for (int i=0; i<2 ; i++)
	{
		cout<<"Details of employee "<<i+1<<endl;
		cout<<"Name: "<<e1[i].name<<endl;
		cout<<"Id: "<<e1[i].id<<endl;
		cout<<"Salary: "<<e1[i].salary<<endl;
		cout<<endl;
	}

	return 0;
}
*/

/*
OUTPUT: Employee 1
		Rahul
		122
		45000
	
		Employee 2
		Shyam
		142
		36000
	
		Details of employee 1
		Name: Rahul
		Id: 122
		Salary: 45000
	
		Details of employee 2
		Name: Shyam
		Id: 142
		Salary: 36000
*/