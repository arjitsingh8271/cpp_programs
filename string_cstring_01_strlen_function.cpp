#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int count=0,i=0;
	char name[] = "Arjit Singh";
	//name[] = "golu"; Not Allowed
		//char name[] = {'A','r','j','i','t',' ','S','i','n','g','h','\0'}
		//Char name[] = 'A'     for character 
	
	//cout<<count<<endl;
	cout<<"The name is: "<<name<<endl;
	cout<<"the length of name is: "<<strlen(name)<<endl;
	// while(name[i] != '\0')
	// {
	// 	count++;
	// 	i++;
	// }

	return 0;
}



