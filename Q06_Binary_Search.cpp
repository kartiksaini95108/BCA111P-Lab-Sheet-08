#include <iostream>
#include <vector>
using namespace std;

// Searches a sorted array and returns its index, or -1 if not found.
int binarySearch(const vector<int>& values, int target) {
    int left = 0;
    int right = static_cast<int>(values.size()) - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (values[middle] == target) return middle;
        if (values[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter size of sorted array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Array size must be positive.\n";
        return 1;
    }

    vector<int> values(size);
    cout << "Enter " << size << " elements in ascending order: ";
    for (int& value : values) cin >> value;

    int target;
    cout << "Enter element to search: ";
    cin >> target;

    int index = binarySearch(values, target);
    if (index == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at position " << index + 1 << ".\n";

    return 0;
}
