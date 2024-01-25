/*
Problem Statement:-
You have a certain number of 100 rupee notes, 10 rupee notes and 1 rupee
notes with you.
There is an item you want to buy whose price is given to you.
Write a program to find if the item is affordable, that is the price of the item is
less than or equal to the current money you have.

Input:-
Four non negative integers.
The first input is an integer representing the number of 100 rupee notes.
The second input is an integer representing the number of 10 rupee notes.
The third input is an integer representing the number of 1 rupee notes.
The fourth input is an integer representing the price of the item.

Output:-
You have to output 1 if the item is affordable.
You have to output 0 if the item is not affordable.

Sample Inputs and Outputs:

Sample input 1
---------------
9 10 1 1001

Sample Output 1
----------------
1

Explanation:
----------------
The total amount of money is 900 + 100 + 1 = 1001, which is equal to the
price of the item.
So, the item is affordable.

Sample input 2
---------------
9 10 0 1001

Sample Output 2
----------------
0

Explanation:
----------------
The total amount of money is 900 + 100 + 0 = 1000, which is less than the
price of the item.
So, the item is not affordable.
*/


# include <iostream>
using namespace std;

int main()
{
	int hun, ten, one, item_price;
	cin>>hun>>ten>>one>>item_price;

	if (hun*100 + ten*10 + one == item_price)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;

	return 0;
}



/*
OUTPUT:
9 10 1 1001                                                                 
1
9 10 0 1001
0
*/