// Template class


# include <iostream>
using namespace std;

class Stack
{
	int *arr;
	int top;
	int size;
public:
	Stack(int size)
	{
		this->size=size;
		top = -1;
		arr=new int[size];
	}

	void push(int x);
	int pop();

	void display()
	{
		for(int i=top ; i>=0 ; i--)
		{
			cout<<arr[i]<<endl;
		}
	}

	~Stack(){}
};

void Stack :: push(int x)
{
	if(top==size-1)
		cout<<"Stack is full!"<<endl;
	else
	{
		top++;
		arr[top]=x;
	}

}

int Stack :: pop()
{
	int x=0;
	if(top==-1)
		cout<<"Stack is empty!"<<endl;	
	else
	{
		x=arr[top];
		top--;
	}
	return x;
}

int main()
{
	Stack s1(10);
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(40);
	s1.push(50);
}