  # include <iostream>
using namespace std;


class stack
{
	private:
		int arr[5];
		int top;
		int max;

	public:
		stack()
		{
			top = -1;
			for(int i=0 ; i<=4 ; i++)
				arr[i]=0;
		}

		bool is_empty()
		{
			if(top == -1)
				return true;
			else
				return false;
		}

		bool is_full()
		{
			if(top == 4)
				return true;
			else
				return false;
		}

		void push(int val)
		{
			if(is_full())	// it will check it is full or not
				cout<<"Stack Overflow!"<<endl;
			
			else
			{
				top++;		// index position
				arr[top] = val;
			}
		}

		int pop()
		{
			if(is_empty())
			{
				cout<<"Stack Underflow!"<<endl;
				return 0;
			}

			else
			{
				int pop_val = arr[top];
				arr[top] = 0;
				top--;
				return pop_val;
			}
		}

		int size()
		{
			return (top+1);
		}

		int peek()
		{
			if(is_empty())
			{
				cout<<"Stack Underflow!"<<endl;
				return 0;
			}

			else
				return arr[top];
		}

		void update(int pos, int val)
		{
			arr[pos] = val;
			cout<<"Value updated at position: "<<pos<<endl;
		}

		void display()
		{
			if(is_empty())
				cout<<"Stack Underflow!"<<endl;

			else
			{
				for(int i=4 ; i>=0 ; i--)
					cout<<"	|"<<arr[i]<<"|"<<endl;
			}
		}

};


int main()
{
	stack s1;
	int option, position, value;

	do
	{
		cout<<"	---------------------------------"<<endl;
		cout<<"	Select options, Enter 0 to Exit."<<endl;
		cout<<"	1. push()"<<endl;
		cout<<"	2. pop()"<<endl;
		cout<<"	3. is_empty()"<<endl;
		cout<<"	4. is_full()"<<endl;
		cout<<"	5. peek()"<<endl;
		cout<<"	6. size()"<<endl;
		cout<<"	7. update()"<<endl;
		cout<<"	8. display()"<<endl;
		cout<<"	9. Clear Screen"<<endl;
		cout<<"	---------------------------------"<<endl;
		cout<<"	Input: ";
		cin>>option;
		cout<<"	---------------------------------"<<endl;

		switch(option)
		{
			case 1:
				cout<<"push() called."<<endl;
				cout<<"Enter an item to push"<<endl;
				cin>>value;
				s1.push(value);
				break;

			case 2:
				cout<<"pop() called."<<endl;
				cout<<"Value "<<s1.pop()<<" poped"<<endl;
				break;

			case 3:
				cout<<"is_empty() called."<<endl;
				if(s1.is_empty())
					cout<<"Stack is Empty."<<endl;
				else
					cout<<"Stack is not Empty."<<endl;
				break;
	
			case 4:
				cout<<"is_full() called."<<endl;
				if(s1.is_full())
					cout<<"Stack is Full."<<endl;
				else
					cout<<"Stack is not Full."<<endl;
				break;
	
			case 5:
				cout<<"peek() called."<<endl;
				cout<<"peek value: "<<s1.peek()<<endl;
				break;
	
			case 6:
				cout<<"size() called."<<endl;
				cout<<"Size of the Stack is: "<<s1.size()<<endl;
				break;
	
			case 7:
				cout<<"update() called."<<endl;
				cout<<"Enter position: ";
				cin>>position;
				cout<<endl;
				cout<<"Enter Value to Update: ";
				cin>>value;
				s1.update(position, value);
				break;
	
			case 8:
				cout<<"display() Called."<<endl;
				s1.display();
				break;
	
			case 9:
				//system("cls");	// for windows
				system("clear");
				break;
	
			default:
				cout<<"Invalid Option."<<endl;
		}


	}while(option!=0);


	return 0;
}