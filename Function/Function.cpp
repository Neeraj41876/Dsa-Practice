#include<iostream>
using namespace std;
void sum_add(int number  )
{
 int num=0;
 for (int i = 0; i<=number; i++)
 {
    num+=i;
 }
 
    cout<<"Calculation of total Number: "<<num<<endl;

}

void factorial(int number)
{
    int fact=1;
    for (int i = 1; i<=number; i++)
    {
        fact*=i;
    }
    cout<<"Calculation of factorial Number: "<<fact<<endl;
}
 void add(int number)
 {
    int sum=0;
    while(number>0)
    {
        int lastdigit = number % 10;
             number/=10;
        sum+=lastdigit;
        
    }
    cout<<"Count the values: "<<sum;
 }
int main()
{
   int number;
    cout<<"Enter the number you want to calculate the sum :";
    cin>>number;
    sum_add(number);
    factorial(number);
    add(number);
return 0;
}