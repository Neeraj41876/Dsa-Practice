#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int limit;

    cout << "Enter the number to check  1 to n numbers  are prime or  not  : ";
    cin >> limit;

    cout << "Prime numbers up to " << limit << " are : ";
    int sum=0;
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            sum+=i;
            cout << i << " ";
        }
    }
    cout << endl;
       cout<<"Sum of all Prime Number: "<<sum;

    return 0;
}
