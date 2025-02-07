#include <iostream>
using namespace std;

int binary(int decimal) {
    int ans = 0;
    int power = 1;
    
    while (decimal > 0) {
        int rem = decimal % 2;
        decimal /= 2;
        ans += rem * power;
        power *= 10;
    }
    
    return ans; // Added return statement
}

int main() {
   int decimal =100;
   //for (int i = 0; i <decimal+1; i++)
   //{
   //    cout<<i<<" : "<<binary(i)<<endl;
   //}
   cout<<decimal<<" : "<<binary(decimal)<<endl;
   
    
    return 0;
}
