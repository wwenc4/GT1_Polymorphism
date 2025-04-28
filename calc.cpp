#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    float add(float a, float b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }


    int multiply(int a, int b) {
        return a * b;
    }

    float divide(float a, float b) {
        return a / b;
    }
};

int main() {
    Calculator calc;
    int choice;

        //menoo
        cout << "\nCalculator Menu:\n";
        cout << "1. Add two integers\n";
        cout << "2. Add three integers\n";
        cout << "3. Add two floating-point numbers\n";
        cout << "4. Subtract two integers\n";
        cout << "5. Multiply two integers\n";
        cout << "6. Divide two floating-point numbers\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        int a, b, c;
        float x, y;

        switch (choice) {
            case 1: // two int
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << calc.add(a, b) << endl;
                break;

            case 2: // three int
                cout << "Enter three integers: ";
                cin >> a >> b >> c;
                cout << "Result: " << calc.add(a, b, c) << endl;
                break;

            case 3: // two lutang
                cout << "Enter two floating-point numbers: ";
                cin >> x >> y;
                cout << "Result: " << calc.add(x, y) << endl;
                break;

            case 4: // sub two int
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << calc.subtract(a, b) << endl;
                break;

            case 5: // x 2 int
                cout << "Enter two integers: ";
                cin >> a >> b;
                cout << "Result: " << calc.multiply(a, b) << endl;
                break;

            case 6: // /div 2 lutang
                cout << "Enter two floating-point numbers: ";
                cin >> x >> y;
                cout << "Result: " << calc.divide(x, y) << endl;
                break;

            default:
                cout << "Invalid choice! Please select a number between 1 and 6." << endl;
    }
}