// pointers and arrays

#include<iostream>
using namespace std;

int main()
{
	int arr[]={12,13,14,15};

	int* p = arr;       //NOTE: no & is used in array becouse name of an arr[0] ... is its address

	cout<<"The value of *(p)   is = arr[0]: "<<*p<<endl;
	cout<<"The value of *(p+1) is = arr[1]: "<<*(p+1)<<endl;
	cout<<"The value of *(p+2) is = arr[2]: "<<*(p+2)<<endl;
	cout<<"The value of *(p+3) is = arr[3]: "<<*p+3<<endl;
    
    cout<<"-----Increment or Decrement in p value-----"<<endl;
	cout<<*(p++)<<endl;
	cout<<*p<<endl;
	cout<<*++p<<endl;
	cout<<*p<<endl;

	return 0;
}