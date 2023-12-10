# include <iostream>
using namespace std;

int LinearSearch(int a[], int n, int key)
{
	for(int i=0 ; i<n ; i++)
	{
		if(key==a[i])
		{
			cout<<key<<" at "<<i<<endl;
			return 0;
		}

	}
	cout<<key<<" not found"<<endl;

	return 0;

}

int main()
{
	int k,a[]={11,3,4,7,1,8};
    int length = sizeof(a)/sizeof(a[0]);    

    cin>>k;
    LinearSearch(a,length,k);

	return 0;
}