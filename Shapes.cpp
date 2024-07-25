#include <iostream>

using namespace std;


class Shape {
public:
    virtual void area() const = 0; 
	int length = 12;
	int width =  8;
	int radius = length /2; 
};


class Rectangle : public Shape {
public:
    void area() const override {
        cout << "Area of Rectangle is : "<<length * width << endl;
    }
};
class Circle : public Shape {
public:
    void area() const override {
        cout << "Area of circle is  :" << (2 * (22/7) * radius )<<  endl;
    }
};

int main() {

    Rectangle rec;
    Circle cir;

    cout << "Respective Area's are :" << endl;
    rec.area();
    cir.area();

    return 0;
}

