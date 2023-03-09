/*
Write a class for Employee
Derive class
1. Fulltime Employee with Salary
2. Parttime Emplayee with Wage
Write required Methods
*/

# include <iostream>
using namespace std;

class Employee
{
protected:
	string fName;
	//static int empId;
public:
	static int empId;
	Employee(string fName = "Null")
	{
		this-> fName = fName;
		empId++;
	}
	// static int getempId()
	// {
	// 	empId++;
	//  	return empId;
	// }
	void displayInfo()
	{
		cout<<"Name: "<<fName<<endl;
	}

	~Employee(){};
};
int Employee :: empId = 0;

class Fulltime : public Employee
{
protected:
	int salary;
public:
	Fulltime(string fName = "Null", int salary = 0) : Employee(fName)
	{
		this-> fName = fName;
		this-> salary = salary;
	}
	void displayInfo()
	{
		cout<<"Name: "<<fName<<endl;
		cout<<"Salary: "<<salary<<endl;
	}

	~Fulltime(){};
};

class Parttime : public Employee
{
protected:
	int wage;
public:
	Parttime(string fName = "Null", int wage = 0) : Employee (fName)
	{
		this-> fName = fName;
		this-> wage = wage;
	}
	void displayInfo()
	{
		cout<<"Name: "<<fName<<endl;
		cout<<"Daily Wage: "<<wage<<endl;
	}

	~Parttime(){};
};

void fullTimeEmp();
void partTimeEmp();

int main ()
{
	// while(1)
	// {
	// 	int choice;
	// 	cout<<"Add Employee: "<<endl;
	// 	cout<<"1. Add Fulltime employe"<<endl;
	// 	cout<<"2. Add Parttime employe"<<endl;
	// 	cout<<"0. To exit"<<endl;
	// 	cin>>choice;

	// 	switch(choice)
	// 	{
	// 	case 1:
	// 		fullTimeEmp();
	// 		break;
	// 	case 2:
	// 		partTimeEmp();
	// 		break;
	// 	case 0:
	// 		exit(0);
	// 		break;
	// 	default:
	// 		cout<<"Wrong choice"<<endl;
	// 		break;
	// 	}
	// }

	// fullTimeEmp();
	// partTimeEmp();

	Fulltime f1("Arjit", 5000);
	f1.displayInfo();
	cout<<"Employee Id: "<<Employee::empId<<endl<<endl;

	Parttime p1("Raju", 300);
	p1.displayInfo();
	cout<<"Employee Id: "<<Employee::empId<<endl<<endl;
	
	return 0;
}

// void fullTimeEmp()
// {
// 	string fname1;
// 	int salary;
// 	cout<<"Enter Fullname & salary of Fulltime employe: ";
// 	getline(cin, fname1);
// 	cin>>salary;
	
// 	Fulltime f1(fname1, salary);
// 	f1.displayInfo();
// 	cout<<"Employee Id: "<<Employee::empId<<endl<<endl;
	
// }

// void partTimeEmp()
// {
// 	string fname2;
// 	int wage;
// 	cout<<"Enter Fullname & wage of Parttime employe: ";
// 	getline(cin, fname2);
// 	cin>>wage;
	
// 	Parttime p1(fname2, wage);
// 	p1.displayInfo();
// 	cout<<"Employee Id: "<<Employee::empId<<endl;
// }




/*
OUTPUT: Name: Arjit
		Salary: 5000
		Employee Id: 1

		Name: Raju
		Daily Wage: 300
		Employee Id: 2
*/