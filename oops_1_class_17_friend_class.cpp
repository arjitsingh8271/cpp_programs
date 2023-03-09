# include <iostream>
using namespace std;

class Teacher;
class Student
{
    int roll;
    int age;
    public:
    friend Teacher;
    Student(int roll, int age)
    {
        this -> roll = roll;
        this -> age = age;
    }
    void display()
    {
        cout<<roll<<endl;
        cout<<age<<endl;
    }
};

class Teacher
{
    public:
    Student s1;
    Teacher(){}
    
    void fun()
    {
        s1.roll = 10;
        s1.age = 19;
    }
    void display()
    {
        cout<<s1.roll<<endl;
        cout<<s1.age<<endl;
    }
};

int main()
{
    Student s1(10, 5);
    Teacher t1;
    t1.display();

}