# include <iostream>
using namespace std;

class Student
{
    int roll;
    int age;

    public:

    static int totalStudent;
        
        Student()
        {
            totalStudent++;   
        }
        // Student(int roll, int age)
        // {
        //     this -> roll = roll;
        //     this -> age = age;
        // }

        int getRoll()
        {
            return roll;
        }
        int getAge()
        {
            return age;
        }
        
};

int Student :: totalStudent = 0; // Initialze static data member

int main()
{
    Student s1, s2, s3, s4;

    cout<<s1.getRoll()<<" "<<s1.getAge()<<endl;
    
    cout<<s1.totalStudent<<endl; // its gives no error but logically incorrect
    
    cout<<Student :: totalStudent<<endl; // this is right

}