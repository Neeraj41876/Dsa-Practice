#include<iostream>
using namespace std;
void subarray(int array[],int size)
{
    
    for (int st=0; st<size; st++)
    {
        int value=0;
        for (int end= st; end<size; end++)
        {
      value+=array[end];
        
        }
        
    }
    cout<<"value:"<<value;
}

int main()
{int array[6]={1,2,3,4,5,6};
int size=6;
subarray(array,size);
return 0;
}