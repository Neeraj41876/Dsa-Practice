#include <iostream>
#include <vector>

using namespace std;

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main() {
    // Define a 2D vector (matrix)
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the matrix
    cout << "Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}