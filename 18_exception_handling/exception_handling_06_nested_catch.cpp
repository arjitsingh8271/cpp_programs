# include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 1;
        //throw 1.0f;
        //throw 'a';
    }
    catch(int e)
    {
        cout<<"Error Integer"<<endl;
    }
    catch(float e)
    {
        cout<<"Error float"<<endl;
    }
    catch(...)
    {
        cout<<"Error"<<endl;
    }

}




/*
OUTPUT: Error Integer
*/


// # include <iostream>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	cout<<"Enter only Naturan numbers:"<<endl;
	
// 	for(int i=0 ; i<n ; i++)
// 	{
// 		cin>>a[i];
		
// 		try
// 		{
// 			if(a[i] <= 0)
// 				throw 1;
// 			else if (a[i] == 'a')
// 				throw 'a';
// 		}
// 		catch(int e)
// 		{
// 			cout<<"!Error inpute can't ne -ve"<<endl;
// 		}
// 		catch(char e)
// 		{
// 			cout<<"!Error inpute can't be a character"<<endl;
// 		}
// 	}

// }




