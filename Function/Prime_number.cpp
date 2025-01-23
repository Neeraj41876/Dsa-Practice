#include<iostream>
using namespace std; 
int prime(int n)
{
    bool isPrime=true;
        for (int i = 2; i <n-1; i++)
        {
            if (n%i == 0)
            {
                isPrime=false;
                cout<<"Number is not  prime :"<<i<<endl;
              

            }
        }

        if(isPrime==true)
        {
            cout<<"Number is prime :"<<n<<endl;
            
        }
        else
        {
            cout<<"Number is not  prime :"<<n<<endl;
        }  
            
}
int main()
{
    int number=0;
     cout<<"Enter the number to check prime or not :";  
     cin>>number;
     prime(number);

    
return 0;
}