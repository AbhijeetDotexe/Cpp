#include<iostream>
using namespace std;
int sum(int a,int b); // Function Prototype
int main()
{
    int n1,n2;
    cout<<"Enter number 1 : ";
    cin>>n1;
    cout<<"Enter number 2 : ";
    cin>>n2;
    // n1 and n2 are actual parameters
    cout<<"The sum of number 1 and number 2 is : "<<sum(n1,n2);
    return 0;
}
int sum(int a,int b)
{   
    // Formal parameters a and b will take value from actual parameters n1 and n2
    int c =a+b;
    return c;
}
