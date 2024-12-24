#include <iostream>
using namespace std;
int main()
{
    char element;
    cout << " Enter the Character:";
    cin >> element;
    if (element >= 'a' && element <= 'z')
    {
        cout << "This is Lowercase :" << element;
    }
    else
    {
        cout << "This is Uppercase : " << element;
    }
    return 0;
}