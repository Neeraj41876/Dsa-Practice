#include <iostream>

using namespace std;

int findUniqueElement(int arr[], int n) {
    int unique = 0;

    // XOR all elements
    for (int i = 0; i < n; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main() {
    int arr[] = {4, 5, 6, 7, 8, 8, 7, 6, 5}; // 4 appears only once
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique element: " << findUniqueElement(arr, n) << endl;

    return 0;
}
