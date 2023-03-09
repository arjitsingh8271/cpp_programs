/*
Condition Compilation:

syntax					Description
#ifndef pi				if pi is not define
	#define pi 3			then define pi 3
#endif					end
*/



# include <iostream>
using namespace std;

#define pi 3.14

#ifndef pi
	#define pi 3
#endif

int main()
{
	cout<<"pi: "<<pi<<endl;

	return 0;
}



//OUTPUT:	pi: 3.14



// # include <iostream>
// using namespace std;

// #ifndef pi
// 	#define pi 3
// #endif

// int main()
// {
// 	cout<<"pi: "<<pi<<endl;

// 	return 0;
// }



//OUTPUT: pi: 3