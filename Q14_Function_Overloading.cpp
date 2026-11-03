#include <iostream>
using namespace std;

class Calculator {
public:
    // Overloaded function for integer values.
    int add(int first, int second) const {
        return first + second;
    }

    // Overloaded function for decimal values.
    double add(double first, double second) const {
        return first + second;
    }
};

int main() {
    Calculator calculator;

    cout << "Integer addition: " << calculator.add(10, 20) << '\n';
    cout << "Double addition: " << calculator.add(10.5, 20.75) << '\n';

    return 0;
}
