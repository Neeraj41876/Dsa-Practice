#include<iostream>
using namespace std;
int main()
{
        char element;
     cout<<"Enter the Element: ";
     cin>>element;
     //Ascii= American  standard code for information interchange;
     if (element >= 65 && element <= 90)
    {
       
        cout << "This is Uppercase : " << element;
    }
    else
    {
       cout << "This is Lowercase :" << element;  
    }
return 0;
}