#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile("file_02.txt");


	string str;
    	while(getline(infile, str))	// Use a while loop together with the getline() function to read the file line by line
    	{  
         cout << str << endl;   	// print all the data of the string
    	}

	infile.close();					// close file

}



/*
OUTPUT: 	Hello whats up
		I'm Arjit Kumar Singh
		Today's date is: Jan 24 2023
*/