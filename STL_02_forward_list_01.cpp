# include <iostream>
# include <forward_list>
using namespace std;

int main()
{
	forward_list<int> fl={1,2,3};
	for(int x:fl)
		cout<<x<<" ";
	cout<<endl;

	fl.push_front(10);
	for(int x:fl)
		cout<<x<<" ";
	cout<<endl;

	fl.remove(10);

	forward_list<int> :: iterator itr;
	for(itr = fl.begin() ; itr!=fl.end() ; itr++)
		cout<<*itr<<" ";
	cout<<endl;

	//cout<<fl.size()<<endl;
	cout<<fl.empty()<<endl;
}



/*
OUTPUT:	1 2 3                                                            
		10 1 2 3 
		1 2 3 
		0
*/