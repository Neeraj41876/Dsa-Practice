#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
  
  // Find vector size
  cout<<"Size :"<<vec.size()<<endl;
  // Push_back
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  vec.push_back(40);
  cout<<"After Push the values :"<<vec.size()<<endl;
  // pop _back // Means delete the value of vector in last index.
 vec.pop_back();// 40
 // by default delete the value of last index.
 
 // Front are used to print the  starting value of index.
  
  cout<<"Front values:" <<vec.front();//10

// back value are print

  cout<<"Front values:" <<vec.back();//30
//  use to print the index values.
  cout<<"Front values:" <<vec.at(2);//30
 // for(int i : vec)
 // {
 //   cout<<i<<endl;
 // }

return 0;
}