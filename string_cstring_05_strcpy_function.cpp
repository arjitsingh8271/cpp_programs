#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char firstName[] = "Arjit.";
    
  // large enough to store content of firstName
  char fname[10];

  // copy the contents of firstName to fname   
  strcpy(fname,firstName);
  
  cout<<fname<<endl;

  return 0;
}

// Output: Arjit.