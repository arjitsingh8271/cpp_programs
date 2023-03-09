# include <iostream>
# include <vector>
using namespace std;

int main()
{
	vector<int> v={1,2,3};
	for(int x:v)				// using for each loop
		cout<<x<<" ";				// 1 2 3
	cout<<endl;

	
	v.push_back(4);
	for(int x:v)
		cout<<x<<" ";				// 1 2 3 4
	cout<<endl;


	v.push_back(5);
	for(int x:v)
		cout<<x<<" ";				// 1 2 3 4 5
	cout<<endl;

	//v.remove(5);

	v.pop_back();
	for(int x:v)
		cout<<x<<" ";				// 1 2 3 4
	cout<<endl;


	v.insert(v.begin(),10);				// 10 - - - -
	v.insert(v.end(),20);				// - - - - - 20


	vector<int> :: iterator itr;
	for(itr = v.begin() ; itr!=v.end() ; itr++)		// using iterator
		cout<<*itr<<" ";				// 10 1 2 3 4 20
	cout<<endl;


	cout<<v.size()<<endl;				// 6
	cout<<v.empty()<<endl;				// 0
}




/*
OUTPUT:	1 2 3 
		1 2 3 4 
		1 2 3 4 5 
		1 2 3 4 
		10 1 2 3 4 20 
		6
		0
*/