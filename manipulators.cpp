/*
Manipulators

integer			Float			Other
-----------------------------------
hex				fixed			endl
oct				scientific		\n
dec								set()
								left
								right
								ws


*/

# include <iostream>
using namespace std;

int main()
{
	cout<<hex<<123<<endl;
	cout<<dec<<0x7ffe7e7269c8<<"\n";
	cout<<oct<<123<<endl;
	cout<<endl;

	cout<<fixed<<12.4435<<endl;
	cout<<scientific<<43.33<<endl;
	cout<<"\n";

	
}



/*
OUTPUT:	7b
		140731019848136
		173

		12.443500
		4.333000e+01
*/