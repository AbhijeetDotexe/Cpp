/* we can use const keyword to make the value of a constant */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=34;
    cout<<"The value of a was : "<<a<<endl;
    a=45;
    cout<<"The vaue of a is : "<<a;
   
    int x=3,y=78,z=99213;
    cout<<"The value of x with set w is :"<<setw(4)<<x<<endl;
    cout<<"The value of y with set w is :"<<setw(4)<<y<<endl;
    cout<<"The value of z with set w is :"<<setw(4)<<z<<endl;
     return 0;

}