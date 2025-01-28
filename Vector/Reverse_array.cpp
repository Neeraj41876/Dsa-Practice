#include<iostream>
#include<vector>
using namespace std;

int Reverse(vector<int>& vac )
{
 int starting=0;
int n=vac.size();
int ending=n-1;// find the vector size.


while (starting<ending)
{                             
    int temp=vac[starting]; // Third variable.
       vac[starting]=vac[ending];
       vac[ending]=temp;
 //swap(vac[starting],vac[ending]); // using function .
  starting++;
  ending --;
}
for ( int value : vac)
{
    cout<<value<<endl;
}



}
int main()
{
    vector<int> vac ={1,2,3,4,5,6,7,8,9};
     Reverse(vac);
    
return 0;
}