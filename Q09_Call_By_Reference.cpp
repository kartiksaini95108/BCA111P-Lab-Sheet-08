#include <iostream>
using namespace std;

// Swaps the values of two variables using references.
void swapNumbers(int& first, int& second) {
    int temporary = first;
    first = second;
    second = temporary;
}

int main() {
    int first, second;
    cout << "Enter two numbers: ";
    cin >> first >> second;

    cout << "Before swapping: first = " << first
         << ", second = " << second << '\n';

    swapNumbers(first, second);

    cout << "After swapping: first = " << first
         << ", second = " << second << '\n';
    return 0;
}
