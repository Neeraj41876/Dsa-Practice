#include<iostream>
using namespace std;
int main()
{
     int n=5;
//cout<<"Enter the number you want to print the pattern :";
//cin>>n;
//for(int i=1;i<=n;i++)
//{
//    for(int j=1;j<=i;j++)
//    {
//        cout<<j <<" ";
//    }
//    cout<<endl;
//   
//}
//   *******
//for(int i=1;i<=n;i++)
//{
//    for(int j=1;j<=i;j++)
//    {
//        cout<<"*"<<" ";
// 
//    }
//       cout<<endl;
//}
//  Char
//char val='A';
//for(int i=1;i<=n;i++)
//{
//    for(int j=1;j<=i;j++)
//    {
//        cout<<val<<" ";
//        val++;
// 
//    }
//       cout<<endl;
//}

//char val='A';
//for(int i=0;i<=n;i++)
//{
//    val++;
//    for(int j=0;j<=i;j++)
//    {
//        cout<<val<<" ";
//        
// 
//    }
//       cout<<endl;
//}
//
//for(int i=1;i<=n;i++)
//{
//    int num=1;
//    
//    for(int j=1;j<=i;j++)
//    {
//        cout<<num<<" ";
//        num++;
//        
// 
//    }
//       cout<<endl;
//}


// Reverse pattern
//for(int i=1;i<=n;i++)
//{
//    int num=1;
//    
//    for(int j=1;j<=i;j++)
//    {
//        cout<<num<<" ";
//        num++;
//        
// 
//    }
//       cout<<endl;
//}

//for(int i=0;i<n;i++)
//{
//   
//    
//    for(int j=i+1;j>0;j--)
//    {
//
//       cout<<j <<""; 
// 
//    }
//       cout<<endl;
//}
char num='A';

//for(int i=0;i<n;i++)
//{
//   
//    
//    for(int j=i+1;j>0;j--)
//    {
//
//       cout<<num<<" "; 
//       num++;
// 
//    }
//       cout<<endl;
//}

for (int i = 0; i < n; i++)
 {
        for (int j = i + 1; j > 0; j--)
         {
            cout << char('A' + j - 1) << " "; // Convert the value to a character
        }
        cout << endl;
    }
}
       
