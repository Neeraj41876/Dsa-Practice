#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int ans = 0;
    int power = 1;
    
    while (binary > 0) {
        int rem = binary % 10;
        ans += rem * power;
        binary /= 10;
        power *= 2;
    }
    
    return ans;
}

int main() {
    int binary = 101;
    cout << "Decimal value: " << binaryToDecimal(binary) << endl;
    
    return 0;
}
