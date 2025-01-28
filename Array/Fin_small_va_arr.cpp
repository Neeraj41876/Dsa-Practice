#include <iostream>
#include <climits>
using namespace std;

// Function to find the largest value in the array
int Large_value(int size, int arr[]) {
    int large = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > large) {
            large = arr[i];
            
        }
    }
    return large;
}

// Function to find the smallest value in the array
int Smallest_values(int size, int arr[]) {
    int small = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < small) {
            small = arr[i];
           

        }
    }
    return small;
}

int main() {
   
    int size;
     int mark[size];

    //  Take a size of array a want a user
    cout<<"Enter the size of array :";
    cin>>size;
// Take a element of usres;
   cout<<"Enter the element of array :";
   for (int i = 0; i <size; i++)
   {
    cin>>mark[i];
   }
   


    int largest = Large_value(size, mark);
    int smallest = Smallest_values(size, mark);

    cout << "The largest value in the array is: " << largest << endl;
    cout << "The smallest value in the array is: " << smallest << endl;
    

    return 0;
}
