# include <fstream>
using namespace std;

int main()
{
	ofstream outfile("my.txt");
	outfile<<"Arjit Singh"<<endl;
	outfile<<071<<endl;
	outfile.close();
}