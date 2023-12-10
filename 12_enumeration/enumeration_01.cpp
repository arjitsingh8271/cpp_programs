/*
It is a user-define data type used to create a set of name integer constant.
It allows us to use descriptive name instead of numeric values.
*/

#include <iostream>
using namespace std;

enum Bool {False, True};
int main()
{
    Bool a;
    a = True;
    cout<<a<<endl;   
    return 0;
}
// OUTPUT: 1




// *Enums can be declare in the local scope
/*
int main()
{
    enum Bool {False, True};
    Bool a;
    a = True;
    cout<<a<<endl;   
    return 0;
}
// OUTPUT: Day 4
*/



// *Enum names are automatically initialized by the compiler
/*
int main()
{
    enum days {sun, mon, tue, wed, thu, fri, sat};
    cout<<sun<<mon<<tue<<wed<<thu<<fri<<sat<<endl;
    return 0;
}
// OUTPUT: 0123456
*/




//          SOME IMPORTANT FACTS


// 1.Two or more names can have same value.
/*
int main()
{
    enum abc {x=1, y=1, z=1};
    cout<<x<<y<<z<<endl;
    return 0;
}
// OUTPUT: 111
*/



// 2.Only integral values are allowed
/*
int main()
{
    enum abc {x=2,y=6,z=2.5};
    cout<<x<<y<<z<<endl;
    return 0;
}
// OUTPUT: error: enumerator value for ‘z’ 
//                must have integral or unscoped enumeration type
*/



// 3.We can assign values in any order.
//   All unassigned names will get value as value of prev. name +1
/*
int main()
{
    enum abc {x=5,y,z=8};
    cout<<x<<y<<z<<endl;
    return 0;
}
// OUTPUT: 568
*/



// 4.All enums constant must be unique in their scope.
/*
int main()
{
    enum abc1{x=1,y=2,z=3};
    enum abc2{x=4,a=5,b=6};
    cout<<x<<y<<z<<a<<b<<endl;
    return 0;
}
// OUTPUT: Error ‘x’ conflicts with a previous declaration
*/
