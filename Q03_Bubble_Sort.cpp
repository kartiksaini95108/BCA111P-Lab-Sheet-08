#include <iostream>
#include <vector>
using namespace std;

// Sorts an array in ascending order using bubble sort.
void bubbleSort(vector<int>& values) {
    int size = static_cast<int>(values.size());

    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; ++j) {
            if (values[j] > values[j + 1]) {
                swap(values[j], values[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    int size;
    cout << "Enter array size: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be positive.\n";
        return 1;
    }

    vector<int> values(size);
    cout << "Enter " << size << " elements: ";
    for (int& value : values) cin >> value;

    bubbleSort(values);

    cout << "Sorted array: ";
    for (int value : values) cout << value << " ";
    cout << '\n';
    return 0;
}
