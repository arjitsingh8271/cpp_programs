/*
Write a program to store an retrieve list of item in a file
use serialization

Class items should have:
Name, Price, Quantity
*/

# include <iostream>
# include <fstream>

class Items
{
	string name;
	float price;
	int quantity;
public:
	static int items;
	Items(string name, float price, int quantity)
	{
		this-> name = name;
		this-> price = price;
		this-> quantity = quantity

		items++;
	}
};

int Items :: items = 1;

int main()
{
	int n;
	string name;
	float price;
	int quantity;
	cout<<"Enter no. of Items: ";
	cin>>n;
	Items *list[n];
	cout<<"Enter all Items:"<<endl;
	for(int i=1 ; i=n ; i++)
	{
		cout<<"Enter "<<i<<"Item name, price & quantity"<<endl;
		cin>>name;
		cin>>price;
		cin>>quantity;

		list[i]=new Item(name,price,qty);
	}

}