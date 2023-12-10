# include <iostream>
using namespace std;

class Student
{
	int roll;
	char name;
	int age;

	public :
		void setData()
		{
			cout<<"Enter Student Roll: ";
			cin>>roll;
			//cout<<"Enter Student Name: ";
			//cin>>name;
			cout<<"Enter Student Age: ";
			cin>>age;
		}

		void getData()
		{
			cout<<"  Student Roll is: "<<roll<<endl;
			//cout<<"Student Name is: "<<name<<endl;
			cout<<"  Student Age is: "<<age<<endl;
		}
};

int main()
{
	int n;
	cout<<"Enter no. of Student: ";
	cin>>n;
	Student tata[n];

	for(int i=0 ; i<n ; i++)
	{
		tata[i].setData();
		tata[i].getData();
	}

	return 0;
}