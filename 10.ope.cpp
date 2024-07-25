#include <iostream>

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}

    // Overload += operator
    Distance& operator+=(const Distance& d) {
        feet += d.feet;
        inches += d.inches;
        // Convert inches to feet if necessary
        if (inches >= 12) {
            feet += inches / 12;
            inches = inches % 12;
        }
        return *this;
    }

    // Function to display the distance
    void display() const {
        std::cout << feet << " feet " << inches << " inches" << std::endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(3, 10);

    std::cout << "Distance 1: ";
    d1.display();
    
    std::cout << "Distance 2: ";
    d2.display();
    
    d1 += d2;
    
    std::cout << "After d1 += d2, Distance 1: ";
    d1.display();

    return 0;
}
