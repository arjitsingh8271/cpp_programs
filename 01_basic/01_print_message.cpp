
# include <iostream>		// # include : is a Preprocessor directives that tells the compiler to include 
							// a file as part of the finished product. Preprocessor directives begin with a 
							// pound sign (#), which is also called an octothorp.

							// <iostream> : is a standard header file actually this is a library must be in <>. 
                            // That enables the usage of std. input and output objects present in iosteam. 
                            // Header file for taking input and printing  output

using namespace std;		// using namespace std : This tells the compiler to use the std namespace. 
                            // All the build in things available in the iostream library are grouped under one name i.e std

int main()					// int: stand for integers also return type of the function
							// main(): main is a functuon
{
	cout<<"Hello World"<<endl;		// cout: output console to print somthing on monitor.
									// << : insertion operator
									// “”Hello word””: is a string or a message that will be printed on the monitor. 
													// Message must be in double quotes.
									// endl : for new line

	return 0;
}							// curly breces indicate the start and end of a function




/*  					---> multi-line comment start
For Compiling:
	Linux Terminal:
		$ g++ file_name.cpp
		$ ./a.out

	Windows CMD:
		C:\> g++ file_name.cpp
		C:\> .\a.exe	or    .\file_name.exe	

OUTPUT:	Hello World
*/