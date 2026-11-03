#include <iostream>
#include <iomanip>
using namespace std;

class Shape {
public:
    // Pure virtual function makes Shape an abstract class.
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double value) : radius(value) {}

    double area() const override {
        const double pi = 3.141592653589793;
        return pi * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

int main() {
    double radius, length, width;

    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Enter rectangle length and width: ";
    cin >> length >> width;

    if (radius < 0 || length < 0 || width < 0) {
        cout << "Dimensions cannot be negative.\n";
        return 1;
    }

    Circle circle(radius);
    Rectangle rectangle(length, width);

    cout << fixed << setprecision(2);
    cout << "Circle area: " << circle.area() << '\n';
    cout << "Rectangle area: " << rectangle.area() << '\n';

    return 0;
}
