/*
Vector:
is simelar to array

To use in -
# include<vector>

Declear vector:
	vector<dataType> variableName;

*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	//-----declear empty vector

	vector<int> v;		// create empty vector
	//-- to insert value at back side
	v.push_back(1);		//v = {1}
	v.emplace_back(2);	//v = {1,2}		is faster than push_back


	//-----declear vector with size

	vector<int> v2(5);		// v2 = {0, 0, 0, 0, 0}
	vector<int> v3(5, 20);	// v3 = {20, 20, 20, 20, 20}
	vector<int> v4(v3);		// v4 = {20, 20, 20, 20, 20}
	v2.push_back(6);		// v2 = {0, 0, 0, 0, 0, 6}


	//-----declear pair of vector

	vector<pair<int, int>> pv;
	//-- to insert value at back side
	pv.push_back({1,2});	// insert pair of element using {}
	//pv.emplace_back(1,2);	// not neet for {} it automatic assume that


	//-----printing vector single element

	cout<<v[0]<<" "<<v.at(1)<<endl;		//o/p: 1 2
	cout<<v2[0]<<endl;					//o/p: 0
	cout<<v2[5]<<endl;					//o/p: 6
	cout<<v3[2]<<endl;					//o/p: 20
	cout<<v4[0]<<endl;					//o/p: 20
	cout<<v2.back()<<endl;				//o/p: 6

	cout<<pv[0].first<<" "<<pv[0].second<<endl;		//o/p: 1 2 



	//-----printing vector using for loop

	for(int i=0; i<v3.size() ; i++)
		cout<<v3[i]<<" ";
	cout<<endl;			//o/p: 20 20 20 20 20 


	//-----printing vector using iterator

	for(vector<int>::iterator i=v2.begin() ; i!=v2.end() ; i++)
		cout<<*i<<" ";
	cout<<endl;			//o/p: 0 0 0 0 0 6

				// or

	for(auto i=v2.begin() ; i!=v2.end() ; i++)
		cout<<*i<<" ";
	cout<<endl;			//o/p: 0 0 0 0 0 6


	//-----printing vector using for each loop

	for(auto x : v)
		cout<<x<<" ";
	cout<<endl;			//o/p: 1 2




	//-----delete an element from vector using erase()
	
	vector<int> v5 = {1,2,3,4,5,6};
	v5.erase(v5.begin());		// v5= 2 3 4 5 6
	v5.erase(v5.begin()+2);		// v5= 2 3 5 6

	v5.erase(v5.begin()+1, v5.begin()+3);		// v5= 2 6
			//	(v5.start, v5.end)

	//-----insert an element in vector using insert()

	v5.insert(v5.begin(),1);		// v5= 1 2 6
	v5.insert(v5.begin()+2, 2, 4);	// v5= 1 2 4 4 6

	vector<int> copy(2, 100);
	v5.insert(v5.begin(), copy.begin(), copy.end());	// v5= 100 100 1 2 4 4 6


	v5.insert(v5.end(), 7);		// v5= 100 100 1 2 4 4 6 7
	v5.insert(v5.end(), 2, 1);	// v5= 100 100 1 2 4 4 6 7 1 1
	v5.insert(v5.end()-5, 3);	// v5= 100 100 1 2 4 3 4 6 7 1 1


	cout<<v5.size()<<endl;		//o/p: 8

	v5.pop_back();		// v5: 100 100 1 2 4 3 4 6 7 1 


	//----- swap vector
	// v6 = {1, 2}, v7 = {3, 4}
	// v6.swap(v7); 	// v6 = {3, 4}, v7 = {1, 2}


	cout<<v5.empty()<<endl;		//o/p: 0 	means is v5 empty? False

	v5.clear();		// erease entire vector

	cout<<v5.empty()<<endl;		//o/p: 1 	means is v5 empty? True

	return 0;
}