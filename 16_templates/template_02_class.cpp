#include <iostream>
using namespace std;

template <typename T>

class Data {
private: 
	T t;

public:
	void setData(T t) {
		this->t = t;
	}

	T getData() {
		return t;
	}
};

int main() {
	
	Data<int> d1;				// it will take Integer value
	d1.setData(10);
	cout<<d1.getData()<<endl;	// 10

	Data<string> d2;			// it will take String value
	d2.setData("Hello C++");
	cout<<d2.getData()<<endl;	// Hello C++

	return 0;
}