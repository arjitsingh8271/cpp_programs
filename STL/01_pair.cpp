# include<bits/stdc++.h>
using namespace std;

int main()
{
	//-----pair of two
	
	pair<int, int> p={1,2};
	cout<< p.first <<" "<< p.second <<endl;
	//o/p:	1 2

	
	//-----pair of more than three
	
	pair<int, pair<int, int>> p2={1, {2, 3}};
	cout<< p2.first <<" "<< p2.second.first <<" "<< p2.second.second <<endl;
	//o/p:	1 2 3


	//-----pair of two, in an array
	
	pair<int, int> arr[]={{1, 2}, {3, 4}, {5, 6}};
	//	index:				0		1		2
	cout<<arr[2].second<<endl;
	//o/p:	6
	cout<<arr[1].first <<" "<< arr[0].second <<endl;
	//o/p:	3 2



	return 0;
}