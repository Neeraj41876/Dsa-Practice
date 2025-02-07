#include<iostream>
using namespace std;
int main()
{
    int number=0;
     cout<<"Enter the number to check prime or not :";  
     cin>>number;
     bool isPrime=true;
        for (int i = 2; i < number-1; i++)
        {
            if (number%i==0)
            {
                isPrime=false;
                break;
            }
        }

        if(isPrime==true)
        {
            cout<<"Number is prime :"<<number<<endl;
            
        }
        else
        {
            cout<<"Number is not  prime :"<<number<<endl;
        }  
            
        
return 0;
}