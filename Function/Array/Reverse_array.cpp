#include<iostream>
using namespace std;
int reverse_array(int arr[],int size)
{
    int start=0 ,end=size-1;
    while (start<end)
    {   // Swapping using third variable
       // int temp=arr[start];
       // arr[start]=arr[end];
       // arr[end]=temp;
       swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;
    reverse_array(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}