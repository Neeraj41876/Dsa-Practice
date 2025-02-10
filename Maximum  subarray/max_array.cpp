#include<iostream>
using namespace std;
void subarray(int array[],int size)
{
    for (int st=0; st<size; st++)
    {
        for (int end= st; end<size; end++)
        {
        for (int i = st; i <=end; i++)
        {
            cout<<array[i];
        }
        cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{int array[6]={1,2,3,4,5,6};
int size=6;
subarray(array,size);
return 0;
}