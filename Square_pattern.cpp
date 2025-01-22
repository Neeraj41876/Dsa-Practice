#include<iostream>
using namespace std;
  int main()
 {
    int n=0;
    cout<<"Enter the number  :";
    cin>>n;
  //  for (int i = 1; i<=n; i++)
  //  {
  //      for (int j = 1;j<=n; j++)
  //      {
  //          cout<<j;
  //      }
  //   cout<<endl;
  //      
  //  }
  //  
   //  int i=1;
   //  while (i <=n) {
   //    int  j = 1;
   //     while (j <=n) {
   //         cout <<j;
   //         j++;
   //     }
   //     cout << endl;
   //     i++;
   // }
   // return 0;

   // Reverse
    // for (int i = n; i >=1; i--)
    // {
    //        for (int j = n; j >=1; j--)
    //        {
    //            cout<<j;
    //        }
    //        cout<<endl;
    // }
    //int i=1;
    // while (n >=i) {
    //     int  j = n;
    //      while (j >=1) {
    //            cout <<j;
    //            j--;
    //      }
    //      cout << endl;
    //      i++;
    //}

    // using character

//for (int i = 1; i<=n; i++)
//    {
//        char ch='A';
//        for (int j = 1;j<=n; j++)
//        {
//            cout<<ch;
//            ch++;
//          
//        }
//            cout<<endl;
//   
//        
//    }
   char value='A';
for (int i = 1; i<=n; i++)
    {
        for (int j = 1;j<=n; j++)
        {
            cout<<value <<" ";
            value++;
          
        }
            cout<<endl;
   
        
    }
    return 0;

}

  

    