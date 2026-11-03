#include <iostream>
using namespace std;

// Prints the first terms of the Fibonacci series.
void printFibonacci(int terms) {
    long long first = 0, second = 1;

    for (int i = 0; i < terms; ++i) {
        cout << first;
        if (i + 1 < terms) cout << " ";

        long long next = first + second;
        first = second;
        second = next;
    }
    cout << '\n';
}

int main() {
    int terms;
    cout << "How many terms? ";
    cin >> terms;

    if (terms <= 0) {
        cout << "Please enter a positive number of terms.\n";
        return 1;
    }

    printFibonacci(terms);
    return 0;
}
