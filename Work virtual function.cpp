#include <iostream>

using namespace std;

// Base class Vehicle
class Person {
public:
    virtual void work() const = 0;  // Pure virtual function for driving
};

// Derived class Car
class Employee : public Person {
public:
    void work() const override {
        cout << "Employee is working" << endl;
    }
};

// Derived class Truck
class Manager : public Person {
public:
    void work() const override {
        cout << "Manager is giving instructions to Employees" << endl;
    }
};

int main() {
    // Example usage
    Employee emp;
    Manager mng;

    cout << "Work Scenarios :" << endl;
    emp.work();
    mng.work();

    return 0;
}

