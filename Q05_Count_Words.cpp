#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Counts whitespace-separated words in a string.
int countWords(const string& sentence) {
    istringstream input(sentence);
    string word;
    int count = 0;

    while (input >> word) ++count;
    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Number of words: " << countWords(sentence) << '\n';
    return 0;
}
