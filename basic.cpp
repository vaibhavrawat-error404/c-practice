#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;

    void display() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
private:
    int length, breadth;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    void area() override {
        cout << "Area of rectangle = "
             << length * breadth << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of circle = "
             << 3.14 * radius * radius << endl;
    }
};

