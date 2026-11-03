#include <iostream>
using namespace std;

// Returns true if number is prime.
bool isPrime(int number) {
    if (number <= 1) return false;

    for (int divisor = 2; divisor * divisor <= number; ++divisor) {
        if (number % divisor == 0) return false;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number.\n";
    else
        cout << number << " is not a prime number.\n";

    return 0;
}
