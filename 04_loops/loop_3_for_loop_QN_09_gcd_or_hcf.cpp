/*
25)15(0
	0
   --
   15)25(1
   	  15
   	  --
   	  10)15(1
   	  	 10
   	  	 --
   	  	  5)10(2
   	  	  	10
   	  	  	--
   	  	  	00

GCD: 5
*/


# include<iostream>
using namespace std;

int main()
{
    int n1, n2, rem=0;

    cout<<"Input: ";
    cin>>n1;
    cout<<"Input: ";
    cin>>n2;

    while((n1!=0) && (n2!=0))
    {
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
        cout<<n1<<endl;
    }
    cout<<"GCD: "<<n1<<endl;

    return 0;
}



/*
OUTPUT: Input: 15
        Input: 25
        25
        15
        10
        5
        GCD: 5
*/