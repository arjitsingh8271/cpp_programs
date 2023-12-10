/*

RECURSION:

When a function call itself directly or indirectly
that process is called Recursion.

*Note: 
when we create a recursive function we must 
have a Base Condition on it.

Base Condition means a termination condition.
Without B.C. the recursive function react like 
infinity loop.

*/


#include <iostream>
using namespace std;

void recurse(int a)
{
    if(a>0)
    {
        cout<<"Hello"<<endl;
        recurse(a-1);
    }
}

int main()
{
    recurse(3);
    return 0;
}


/* Examine

a=3     |   O/p: Hello Hello Hello

if(3>0) Yes
print(Hello)    (Hello) 1st
f(3-1)
    
    if(2>0) Yes
    print(Hello)    (Hello) 2nd
    f(2-1)

        if(1>0) Yes
        print(Hello)    (Hello) 3rd
        f(1-1)

            if(0>0) N0
            exit
*/