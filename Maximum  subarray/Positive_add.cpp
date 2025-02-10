#include<iostream>
using namespace std;
int array_sum(int array[],int size)
{
    int value=0;
    for (int  i = 0; i <size-1; i++)
    {
    
      
     if( array[i]>= 0)
     { 
     
         value+=array[i];
     }
    }
    
    return value;
    
}
int main()
{
    int  array[7]={1,-2,-3,4,5,9,8};
    int size=7;
  cout<<" Add positive value:"<<array_sum(array,size);

    
return 0;
}