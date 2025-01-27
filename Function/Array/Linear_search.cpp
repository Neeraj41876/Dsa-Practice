#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int target)
{
    cout<<"Searching for:"<<target<<endl;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
        
    }
    return -1;
}
int main()
{
    int arr[]={0,1,2,3,4,5};
    int size=6;
    int target=7;
    cout<<linear_search(arr,size,target)<<endl;
    
return 0;
}