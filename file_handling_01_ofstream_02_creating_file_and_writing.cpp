# include <iostream>
# include <fstream>
using namespace std;

int main()
{
    ofstream outfile("file_02.txt");
    
    outfile<<"Hello whats up"<<endl;
    outfile<<"I'm Arjit Kumar Singh"<<endl;
    outfile<<"Today's date is: "<<__DATE__<<endl;
    outfile.close();  
}


/*
file_02.txt:    Hello whats up
                I'm Arjit Kumar Singh
                Today's date is: Jan 24 2023					
*/