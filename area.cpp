#include <iostream>
class Shape {
public:
    virtual float area() {
        return 0;
    }
};
class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float l, float w) : length(l), width(w) {}

    float area() override {
        return length * width;
    }
};
class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    float area() override {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rect(5, 4);
    Circle circle(3);

    std::cout << "Area of Rectangle: " << rect.area() << std::endl;
    std::cout << "Area of Circle: " << circle.area() << std::endl;

    return 0;
}
