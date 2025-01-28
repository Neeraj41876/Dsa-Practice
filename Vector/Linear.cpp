#include<iostream>
#include<vector>
using namespace std;
int linear_Search(const vector<int>& vac , int target)
{
  for(int value : vac)
  {
    if( value == target)
    {
        return  0;
        // yes
    }
  }
  return -1; //No
}
// reverse

int main()
{  vector<int>vac={1,2,4,5,6,7,8};
 int target =9;
 int number= linear_Search(vac,target);


return 0;
}