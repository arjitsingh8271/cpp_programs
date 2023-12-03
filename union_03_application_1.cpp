/*
//		USING STRUCTURE ONLY
#include <iostream>
#include <cstring> // For string manipulation functions
using namespace std;

#pragma pack(1)

struct store
{
	double price;
	char *title;
	char *author;
	int num_pages;
	int color;
	int size;
	char *design;
};

int main() {
    store book;
    book.title = new char[50];   // Allocate memory for title
    book.author = new char[50];  // Allocate memory for author

    // Assign values to the structure members
    strcpy(book.title, "Intro to C++");
    strcpy(book.author, "Arjit Singh");
    book.num_pages = 300;
    book.price = 10;

    cout << "Size of book: " << sizeof(book) << " bytes" << endl;

    // Deallocate dynamically allocated memory
    delete[] book.title;
    delete[] book.author;

    return 0;
}

// OUTPUT: Size of book: 44 bytes
*/




//		USING STRUCTURE & UNION.

#include <iostream>
using namespace std;
#pragma pack(1)

struct store
{
	double price;

	union
	{
		struct
		{
			char *title;
			char *author;
			int num_pages;
		} book;

		struct
		{
			int color;
			int size;
			char *design;
		} shirt;
	} items;
};

int main() {
    store s;
    s.items.book.title = new char[50];  
    s.items.book.author = new char[50];

    s.items.book.title, "Intro to C++";
    s.items.book.author, "Arjit Singh";
    s.items.book.num_pages = 300;
    s.price = 10;

    cout << "Size of book: " << sizeof(s.items.book) << " bytes" << endl;

    delete[] s.items.book.title;
    delete[] s.items.book.author;

    return 0;
}


// OUTPUT: Size of book: 20 bytes