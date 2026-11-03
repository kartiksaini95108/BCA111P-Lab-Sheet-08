#include <iostream>
#include <string>
using namespace std;

// Copies source text into destination using a function.
void copyString(string& destination, const string& source) {
    destination = source;
}

int main() {
    string source, destination;

    cout << "Enter a string: ";
    getline(cin, source);

    copyString(destination, source);

    cout << "Original string: " << source << '\n';
    cout << "Copied string: " << destination << '\n';
    return 0;
}
