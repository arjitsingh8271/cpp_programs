# include <iostream>
using namespace std;

class Student
{
    int roll;
    int age;
    static int totalStudents;

    public:
        Student(int roll, int age)
        {
            this -> roll = roll;
            this -> age = age;

            totalStudents++;
        }

        Student(Student &obj)
        {
            this -> roll = obj.roll;
            this -> age = obj.age;

            totalStudents++;
        }

        void display()
        {
            cout<<roll<<endl;
            cout<<age<<endl;
        }

        static int getTotalStudents()
        {
            return totalStudents;
        }
};

int Student :: totalStudents = 0;

int main()
{
    Student s1(10, 5);
    s1.display();

    Student s2(20, 10);
    s1.display();

    Student s3(s1);
    s3.display();

    Student s4(30, 20);
    s4.display();

    cout<<Student::getTotalStudents()<<endl;

    cout<<s1.getTotalStudents()<<endl;

}