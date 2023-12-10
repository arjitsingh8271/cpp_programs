/*
Write a Class for Student with
1. Name
2. Roll
3. Marks in 3 subject
Function for
Total marks
Grade
And required methods
*/

#include <iostream>
using namespace std;

class Student
{
  string name;
  int roll;
  int m1;
  int m2;
  int m3;

  public:
    int total;
    Student(string name, int roll, int m1, int m2, int m3)
    {
      this -> name = name;
      this -> roll = roll;
      this -> m1 = m1;
      this -> m2 = m2;
      this -> m3 = m3;
    }
    void display()
    {
      cout<<"--- Result ---"<<endl;
      cout<<name<<endl;
      cout<<roll<<endl;
    }
    void Total()
    {
      total = m1+m2+m3;
      cout<<total<<endl;
    }
    void Grade()
    {
      int avg = total / 3;
      cout<<avg<<endl;
      
      if(avg >= 90)
        cout<<"A"<<endl;
      else if(avg >= 80)
        cout<<"B"<<endl;
      else if(avg >= 70)
        cout<<"C"<<endl;
      else if(avg >= 60)
        cout<<"D"<<endl;
      else if(avg >= 50)
        cout<<"E"<<endl;
      else if(avg >= 40)
        cout<<"F"<<endl;
      else
        cout<<"Fail"<<endl;
    }

};

int main() 
{
  string name;
  int roll, m1, m2, m3;
  cout<<"Enter Name of the Student: ";
  cin>>name;
  cout<<"Enter Roll of the Student: ";
  cin>>roll;
  cout<<"Enter 1st paper marks: ";
  cin>>m1;
  cout<<"Enter 2nd paper marks: ";
  cin>>m2;
  cout<<"Enter 3rd paper marks: ";
  cin>>m3;

  Student s1(name,roll,m1,m2,m3);
  s1.display();
  s1.Total();
  s1.Grade();

}
