# include <iostream>
using namespace std;


class Rectangle
{
    int *ptr;

public:
    Rectangle(){}

    Rectangle(int *ptr)
    {
        this->ptr = ptr;
        cout<<"Constructor Called !"<<endl;
    }

    void display()
    {
        cout<<ptr<<endl;
    }

    ~ Rectangle()
    {
        cout<<"Destructor Called !"<<endl;
        //delete []ptr;
    }
};

int main()
{
    Rectangle r(6);
    r.display();

    return 0;
}