#include <iostream>
using namespace std;

class Employee {
public:

    virtual void showDeets() {
        cout << "Employee details" << endl;
    }
};

class Manager : public Employee {
public:
    void showDeets() override {
        cout << "I am a Manager. I manage teams." << endl;
    }
};

class Developer : public Employee {
public:
    void showDeets() override {
        cout << "I am a Developer. I write code." << endl;
    }
};
int main() {
    Employee emp;
    Manager mgr;
    Developer dev;

    cout << "What type of employee would you like to create?" << endl;
    cout << "1. Manager" << endl;
    cout << "2. Developer" << endl;

    cout << "Enter your choice (1-2): ";
    int choice;
    cin >> choice;

switch (choice) {
        case 1:
            emp.showDeets();
            mgr.showDeets();
            break;
        case 2:
            emp.showDeets();
            dev.showDeets();
            break;
        default:
            cout << "Invalid choice." << endl;
            return 1;
    }
    return 0;
}