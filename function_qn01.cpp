// C++ Program to Check Prime Number By Creating a Function

#include <iostream>
using namespace std;

void primeNumber(int);

int main()
{
    int x;
    cout<<"Enter a positive integer: ";
    cin>>x;

    primeNumber(x);

    return 0;
}

void primeNumber(int a)
{
    if(a == 1 || a == 0)
        cout<<a<<" is not a Prime Number"<<endl;

    for(int i=2 ; i<=a ; i++)
    {
        if(a%i==0)
        {
            cout<<a<<" is not a Prime Number"<<endl;
            break;
        }
        
        cout<<a<<" is a Prime Number"<<endl;
        break;        
    } 
}