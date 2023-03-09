#include<iostream>
using namespace std;

class table
{
	int num,i,multi,upto;   // Automatic in Private

	public:
	void input()
	{
		cout<<"Enter no. of table: "<<endl;
		cin>>num;

		cout<<"Enter no. of table upto: "<<endl;
		cin>>upto;
	}

	void calc()
	{
		for (i = 1; i <= upto; i++)
		{
			multi=num*i;
			cout<<num<<"*"<<i<<"="<<multi<<endl;
		}
	}
};

int main()
{
	table obj;
	obj.input();
	obj.calc();

	return 0;
}