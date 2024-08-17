# include <iostream>
# include <fstream>
using namespace std;

// ofstream is a class and outfile is an object

int main()
{
    ofstream outfile;                   // If the file "aaa.txt" is existing then outfile will open the file and 
    outfile.open("file_01.txt");        // if it is not existing then it will create a new file with the name "aaa.txt".
                                    
                                        // if the already file is existing and it is having some content then The 
                                        // outfile will truncate that content or remove the content.

                                        // If you want to append the new content after the old content then there 
                                        // is a mode available that is ios::app. ‘app’ stands for append.
                                        // syntax:  ofstream outfile("aaa.txt", ios::app);
                                    
                                        // by default truncate mode is taken
                                        // ofstream outfile("aaa.txt");  =  ofstream outfile("aaa.txt",ios::trunc);
    
    outfile<<"Hello"<<endl;    // for writing in the file
    outfile<<71<<endl;
    outfile.close();                    // for closing file
}



/*
file_01.txt:    Hello
                71					
*/