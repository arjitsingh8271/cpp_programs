#include <iostream>
using namespace std;

class Solution {
  public:
    int isDigitSumPalindrome(int N) 
    {
        int rev=0, t=0, s=0;
        while(N!=0)
        {
            s +=N%10;
            N/=10;
        }
        t=s;
        
        cout<<t<<endl;
        
        while(s!=0)
        {
            rev = (rev*10) + (s%10);
            s/=10;
        }
        if(t==rev)
            return 1;
        else
            return 0;
        
    }
};

int main() 
{
    Solution s1;
    cout<<s1.isDigitSumPalindrome(92)<<endl;

    return 0;
}

