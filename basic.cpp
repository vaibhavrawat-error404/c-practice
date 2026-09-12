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

int main() {
    Rectangle r(10, 5);
    Circle c(7);

    Shape* ptr;

    ptr = &r;
    ptr->display();
    ptr->area();

    ptr = &c;
    ptr->area();

    return 0;
}