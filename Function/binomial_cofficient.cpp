#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int binomial_cofficient(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main()
{

    int n = 8, r = 2;
    cout << "value of nCr is :" << binomial_cofficient(n, r);
    return 0;
}