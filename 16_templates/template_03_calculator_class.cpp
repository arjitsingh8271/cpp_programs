#include <iostream>
using namespace std;

// Template class definition
template <typename T>
class Calculator {
public:
    // Constructor
    Calculator(T a, T b) : num1(a), num2(b) {}

    // Member functions to perform calculations
    T add() {
        return num1 + num2;
    }

    T subtract() {
        return num1 - num2;
    }

    T multiply() {
        return num1 * num2;
    }

    T divide() {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Division by zero error!" << endl;
            return 0;
        }
    }

private:
    T num1, num2; // Template type members
};

int main() {
    // Creating Calculator objects with different data types
    Calculator<int> intCalc(10, 5);
    Calculator<float> floatCalc(10.5, 2.5);

    // Performing operations on integer data
    cout << "Integer Calculations:" << endl;
    cout << "10 + 5 = " << intCalc.add() << endl;
    cout << "10 - 5 = " << intCalc.subtract() << endl;
    cout << "10 * 5 = " << intCalc.multiply() << endl;
    cout << "10 / 5 = " << intCalc.divide() << endl;

    // Performing operations on float data
    cout << "\nFloat Calculations:" << endl;
    cout << "10.5 + 2.5 = " << floatCalc.add() << endl;
    cout << "10.5 - 2.5 = " << floatCalc.subtract() << endl;
    cout << "10.5 * 2.5 = " << floatCalc.multiply() << endl;
    cout << "10.5 / 2.5 = " << floatCalc.divide() << endl;

    return 0;
}
