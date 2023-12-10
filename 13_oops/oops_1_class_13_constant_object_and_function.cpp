# include <iostream>
using namespace std;

class Rectangle
{
    int len;
    int bdth;
    
    public:
        // Constructors
        Rectangle (){}
        // Rectangle (int len, int bdth)
        // {
        //     this -> len = len;
        //     this -> bdth = bdth;
        // }
        
        // Mutator
        void set(int len, int bdth)
        {
            this -> len = len;
            this -> bdth = bdth;
        }
        // Accessor
        void get() const
        {
            cout<<len<<endl;
            cout<<bdth<<endl;
        }

        // Facilitators
        int area()
        {
            return len*bdth;
        }
        int perimeter()
        {
            return 2*(len*bdth);
        }

        // Destructor
        ~Rectangle() {}
};

int main()
{
    Rectangle r1;
    r1.set(10,5);
    r1.get();
    cout<<"Area is: "<<r1.area()<<endl;
    cout<<"Perimeter is: "<<r1.perimeter()<<endl;

    // constant object
    const Rectangle r2;
    r2.get();

    // const Rectangle r3(20,30);
    // r3.get();
    // cout<<"Area is: "<<r1.area()<<endl;
    // cout<<"Perimeter is: "<<r1.perimeter()<<endl;

    // r3.bdth = 5;


}