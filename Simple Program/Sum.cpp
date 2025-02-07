#include<iostream>
using namespace std;
int main()
{
     int i=0,sum=0;
     int count=10;
     //  using for loop 
    // for ( i = 0; i < count; i++)
    // {
    //   if(i%2==1)
    //  {
    //   sum+=i;
    //  }
    // }
    // cout<<"odd  value "<<sum;

    // using  While loop

    while (i<count)
    {
      i++;
      if (i%2==1)
      {
         sum+=i;
      }
      
    }
    cout<<"odd value calculation"<<sum;
    
     
return 0;
}