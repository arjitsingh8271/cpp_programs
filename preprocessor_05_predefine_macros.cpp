/*
Predefined C++ Macros

Macros			Description
_LINE_		This contains the current line number of the program when it is being compiled.
_FILE_		This contains the current file name of the program when it is being compiled.
_DATE_		This contains a string of the form month/day/year that is the date of the translation of the source file into object code.
_TIME_		This contains a string of the form hour:minute:second that is the time at which the program was compiled.
*/

#include <iostream>
using namespace std;

int main () 
{
   cout<<"__LINE__ : "<<__LINE__<<endl;
   cout<<"__FILE__ : "<<__FILE__<<endl;
   cout<<"__DATE__ : "<<__DATE__<<endl;
   cout<<"__TIME__ : "<<__TIME__<<endl;

   return 0;
}



/*
OUTPUT: __LINE__ : 16
		__FILE__ : preprocessor_05_predefine_macros.cpp
		__DATE__ : Jan 23 2023
		__TIME__ : 01:06:48
*/