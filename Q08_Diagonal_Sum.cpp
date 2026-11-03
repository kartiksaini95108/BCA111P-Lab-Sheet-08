#include <iostream>
#include <vector>
using namespace std;

// Adds the main diagonal elements of a square matrix.
int diagonalSum(const vector<vector<int>>& matrix) {
    int sum = 0;
    for (int i = 0; i < static_cast<int>(matrix.size()); ++i)
        sum += matrix[i][i];
    return sum;
}

int main() {
    int size;
    cout << "Enter order of square matrix: ";
    cin >> size;

    if (size <= 0) {
        cout << "Matrix size must be positive.\n";
        return 1;
    }

    vector<vector<int>> matrix(size, vector<int>(size));
    cout << "Enter matrix elements:\n";
    for (auto& row : matrix)
        for (int& value : row) cin >> value;

    cout << "Sum of main diagonal elements: " << diagonalSum(matrix) << '\n';
    return 0;
}
