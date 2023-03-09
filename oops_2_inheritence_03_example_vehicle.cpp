# include <iostream>
using namespace std;

class Vehicle
{
private:
	int maxSpeed;
protected:
	int tyres;
public:
	string color;

	Vehicle (int maxSpeed=0, int tyres=0, string color="Null")
	{
		this -> maxSpeed = maxSpeed;
		this -> tyres = tyres;
		this -> color = color;
	}
	void display()
	{
		cout<<"Base Class:-- "<<endl;

		cout<<"Speed: "<<maxSpeed<<endl;
		cout<<"Tyres: "<<tyres<<endl;
		cout<<"Color: "<<color<<endl;
	}

	~Vehicle(){};
};

class Car : public Vehicle
{
public:
	int gears;
	
	Car (int tyres=0, string color="Null", int gears=0)
	{
		this -> tyres = tyres;
		this -> color = color;
		this -> gears = gears;
	}
	void display()
	{
		cout<<"Derived Class:-- "<<endl;

		cout<<"Tyres: "<<tyres<<endl;
		cout<<"Color: "<<color<<endl;
		cout<<"Gears: "<<gears<<endl;
	}

	~Car(){};
};

int main()
{
	Vehicle v1(160,7,"Black");
	v1.display();

	Car c1(4,"Green",6);
	c1.display();
	return 0;
}