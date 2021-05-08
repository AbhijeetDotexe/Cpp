#include<iostream>
using namespace std;
void swapPointer(int* a, int* b)
{
// This will swap a and b but if we try to do it without pointers it will not happen because it only creates a copy of itslef 
    int temp = *a;
    *a=*b;
    *b=temp;
}
void swapRef(int &a ,int &b)
{
// This will swap a and b using reference variable 

    int temp=a;
    a=b;
    b=temp;
}
int sum(int a ,int b)
{
    int c=a+b;
    return c;
}
int main()
{   
    int x=4,y=5;
    int n=3 ,m=8;
    //cout<<"The sum of 4 and 5 is : "<<sum(4,5)<<endl;
    cout<<"The value of x and Y before swap is : "<<x<<" and "<<y<<" respectively"<<endl;
    swapPointer(&x,&y);
    cout<<"The value of X and Y after swap is : "<<x<<" and "<<y<<" respectively ";
    swapRef(n,m);
    cout<<"\nThe value of N and M after swap is : "<<n<<" and "<<m<<" respectively ";
    
    return 0;
}