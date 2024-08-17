/*
Bubble Sort Algoritm:

1. Compare the first two adjacent elements of the list.
2. If the first element is greater than the second, swap them.
3. Move to the next pair of elements and repeat the comparison and swap if necessary.
4. Continue this process for each pair of adjacent elements until the end of the list.
5. The largest element will "bubble up" to the end of the list.
6. Repeat the entire process for the rest of the list, excluding the last sorted 
element each time, until no more swaps are needed.

	T.C
	---
		Best Case  = O(n)
		Avg Case   = O(n^2)
		Worst Case = O(n^2)

	S.C = O(1)
	----------
*/

# include <iostream>
using namespace std;

void bubble_sort(int ar[], int n)
{
	for(int i=0 ; i<n ; i++)
	{
		bool swapped = false;
		for(int j=0 ; j<n-i-1 ; j++)
		{
			if(ar[j] > ar[j+1])
			{
				int temp = ar[j];
				ar[j] = ar[j+1];
				ar[j+1] = temp;

				swapped = true;
			}
		}

		if(swapped == false)
			break;
	}
}

int main()
{
	int arr[6] = {2,7,4,1,5,3};

	for (int x:arr)
		cout<<x<<" ";
	cout<<endl;

	bubble_sort(arr, 6);

	for (int x:arr)
		cout<<x<<" ";
	cout<<endl;
}


/*
OUTPUT:	2 7 4 1 5 3                                                           
		1 2 3 4 5 7
*/

/*
Explanation:

    Outer Loop: The outer loop runs from the beginning of the list to the second last element. 
   				It ensures that each element is bubbled up to its correct position in each pass.
    Inner Loop: The inner loop compares each pair of adjacent elements and swaps them if they are in the wrong order.
    Swapped Flag: A flag is used to track whether any swaps were made during a pass. 
    				If no swaps were made, the list is already sorted, and the algorithm can terminate early, 
    				improving efficiency in the best-case scenario.
*/