#include<iostream>
using namespace std;
int main()
{
    char element;
     cout<<"Enter the Element: ";
     cin>>element;                                                // Ststic_cast  used  to convert the value char to initger
     cout<<"This your  Element "<<element<<" Your Element values "<<static_cast<int>(element);
    // Uppercase  value will be Diffrent
    // Lowercase  Value wiil be Diffrent
return 0;
}