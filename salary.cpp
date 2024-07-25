#include <iostream>

using namespace std;


class Employee {
public:
    virtual void pay() const = 0;  
    int Salary =30000;
    int bonous = 12000;
};

// Derived class Car
class Manager : public Employee {
public:
    void pay() const override {
        cout << "The Salary  for employee was  :" <<Salary + bonous  << endl;
    }
};

// Derived class Truck
class Engineer : public Employee {
public:
    void pay() const override {
        cout << "The Manager salary was :" << Salary + (2*bonous)<< endl;
    }
};

int main() {
    // Example usage
    Engineer eng;
    Manager mng;

    cout << "Work Salaries:" << endl;
    eng.pay();
    mng.pay();

    return 0;
}

