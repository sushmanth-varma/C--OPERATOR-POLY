#include <iostream>
#include <cmath> // for M_PI and mathematical functions

using namespace std;

// Base class
class Shape {
public:
    virtual double area() const = 0;    // Pure virtual function for area
    virtual double volume() const = 0;  // Pure virtual function for volume
};

// Derived class Sphere
class Sphere : public Shape {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {}

    // Calculate area of the sphere
    double area() const override {
        return 4 * M_PI * radius * radius;
    }

    // Calculate volume of the sphere
    double volume() const override {
        return (4.0 / 3.0) * M_PI * radius * radius * radius;
    }
};

// Derived class Cylinder
class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Calculate lateral surface area of the cylinder
    double area() const override {
        return 2 * M_PI * radius * height + 2 * M_PI * radius * radius;
    }

    // Calculate volume of the cylinder
    double volume() const override {
        return M_PI * radius * radius * height;
    }
};

int main() {
    // Example usage
    Sphere sphere(5.0);
    Cylinder cylinder(3.0, 7.0);

    cout << "Sphere:" << endl;
    cout << "Area: " << sphere.area() << endl;
    cout << "Volume: " << sphere.volume() << endl;

    cout << "\nCylinder:" << endl;
    cout << "Area: " << cylinder.area() << endl;
    cout << "Volume: " << cylinder.volume() << endl;

    return 0;
}

