
#include<iostream>
#include<climits>
using namespace std;

int sum_array(int arr[], int size) // Sum of array
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int max_array(int arr[], int size) // Find the largest element of array
{
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int min_array(int arr[], int size) // Find the smallest element of array
{
    int smallest = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

void swap(int &min, int &max) // Swap function using references
{
    int temp = min;
    min = max;
    max = temp;
    cout << "After swapping:" << endl;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int a = min_array(arr, size); // Find min array element
    int b = max_array(arr, size); // Find max array element

    cout << "Minimum element of array is: " << a << endl; // Print min element
    cout << "Maximum element of array is: " << b << endl; // Print max element

    swap(a, b); // Swap min and max element of array

    cout << "Sum of array: " << sum_array(arr, size) << endl; // Sum of array

    return 0;
}
