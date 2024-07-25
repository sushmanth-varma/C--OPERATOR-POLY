#include <iostream>
using namespace std;
// Base class
class Person {
public:
    virtual void work() {
        cout << "Person is working" << endl;
    }
};
// Derived classes
class Employee : public Person {
public:
    void work() override {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Person {
public:
    void work() override {
        cout << "Manager is working" << endl;
    }
};

int main() {
    Person* person1 = new Employee();
    Person* person2 = new Manager();

    person1->work();
    person2->work();

    delete person1;
    delete person2;

    return 0;
}

