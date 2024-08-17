# include <iostream>
using namespace std;

int main()
{
    cout<<"Input: ";
    int n;
    cin>>n;

    bool is_prime = true;

    if(n==0 || n==1){
        is_prime = false;
    }
    
    int i = 2;

    while (i <= (n/2)){
        if(n%i==0)
            is_prime = false;
        i = i+1;
    }

    if(is_prime){
        cout<<"Yes"<<endl;
    }
    
    else{
        cout<<"No"<<endl;
    }
}