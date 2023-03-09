#include <iostream>
using namespace std;

void recurse(int a)
{
    if(a>0)
    {
        cout<<a<<endl;
        recurse(a-1);
    }
}

int main()
{
    int x = 5;
    recurse(x);

    return 0;
}