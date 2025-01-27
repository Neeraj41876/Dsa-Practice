#include<iostream>
using namespace std;
int change(int arr[] ,int size)
{
    cout<<"Size of array in function:";
    for (int i = 0; i < size; i++)
    {
        arr[i]=size*arr[i];
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=4;
  
    change(arr,size);
    cout<<"Size of array in main:";
      for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";  
    }
    cout<<endl;
    
    
return 0;
}