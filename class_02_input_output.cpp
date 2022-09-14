#include<iostream>
using namespace std;

class input_output
{	
	private:
		int a,b;

	public:
		void input()           // contains a function (also called method)
		{
			cout<<"Input a is: "<<endl;
			cin>>a;
			cout<<"Input b is: "<<endl;
			cin>>b;
		}
		
		void output()         // contains a function (also called method)
		{
			cout<<"The value of (a+b) is: "<<a+b<<endl;
			cout<<"The value of (a-b) is: "<<a-b<<endl;
			cout<<"The value of (a*b) is: "<<a*b<<endl;
			cout<<"The value of (a/b) is: "<<a/b<<endl;
			cout<<"The value of (a%b) is: "<<a%b<<endl;
		}
	
};

int main()
{
	input_output obj;
	obj.input();      //objects of input_output
	obj.output();     //objects of input_output
	
	return 0;
}