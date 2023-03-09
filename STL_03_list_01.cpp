# include <iostream>
# include <list>
using namespace std;

int main()
{
	list<int> l={1,2,3};
	for(int x:l)
		cout<<x<<" ";
	cout<<endl;
	

	l.push_back(4);
	for(int x:l)
		cout<<x<<" ";
	cout<<endl;


	l.push_back(5);
	for(int x:l)
		cout<<x<<" ";
	cout<<endl;


	l.pop_back();
	for(int x:l)
		cout<<x<<" ";
	cout<<endl;


	l.insert(l.begin(),10);


	list<int> :: iterator itr;
	for(itr = l.begin() ; itr!=l.end() ; itr++)
		cout<<*itr<<" ";
	cout<<endl;
}




/*
OUTPUT:	1 2 3 
		1 2 3 4 
		1 2 3 4 5 
		1 2 3 4 
		10 1 2 3 4 
*/