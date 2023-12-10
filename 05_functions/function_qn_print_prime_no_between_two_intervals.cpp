// C++ Program to Display Prime Numbers Between Two Intervals Using Functions
#include <iostream>
using namespace std;

int primeNumber(int);

int main()
{
    int num1, num2;
    bool flag;
    
    cout<<"Enter two positive integers: ";
    cin>>num1>>num2;

// if 1st number is greater than 2nd then swapping..
    if(num1 > num2)
    {
        num1 = num1+num2;
        num2 = num1-num2;
        num1 = num1-num2;
    }

// calling primeNumber() and printing prime numbers
    for(int j=num1+1 ; j<num2 ; j++)
    {
        flag = primeNumber(j);
        if(flag)
            cout<<j<<", ";
    }
    cout<<endl;

    return 0;

}

int primeNumber(int n)
{
    bool is_prime = true;

    if(n == 0 || n == 1)
        is_prime = false;
    
    for(int i=2 ; i<=n/2 ; i++)
    {
        if(n%i == 0)
        {
            is_prime = false;
            break;
        }        
    }

    return is_prime;
}