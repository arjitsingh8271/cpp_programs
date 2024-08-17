# include <iostream>
# include <fstream>
using namespace std;

int main()
{
	ifstream inf("file_02.txt");

	if(inf.is_open())cout<<"File exist"<<endl;
	if(!inf.is_open())cout<<"File does not exist"<<endl;

	string str;
    while(getline(inf, str))								// then print content
    {  
        cout << str << endl;   
    }	
    if(inf.eof())cout<<"End of file reached"<<endl;			// for check end of the file reached or not
    inf.close();
    cout<<endl;





    ifstream inf1("file.txt");

    if(inf1.is_open())cout<<"File exist"<<endl;
	if(!inf1.is_open())cout<<"File does not exist"<<endl;

    while(getline(inf1, str))	
    {  
        cout << str << endl;   
    }

	inf1.close();	
}



/*
OUTPUT:	File exist
		Hello whats up
		I'm Arjit Kumar Singh
		Today's date is: Jan 24 2023
		End of file reached

		File does not exist
*/