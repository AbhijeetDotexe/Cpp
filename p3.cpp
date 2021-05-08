#include<iostream>
using namespace std;
int main()
{   
    float x =43424;
    float &y =x;
    cout <<x<<endl;
    cout<<y<<endl;
    int a=60;
    float b=40.44;
    cout<<"The value of a is :"<<(float)a<<endl;
    cout<<"The value of b is :"<<int(b)<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The sum of a+b is : "<<a+b<<endl;
    cout<<"The sum of a+b is : "<<a+int(b)<<endl;
    cout<<"The sum of a+b is : "<<a+(int)b<<endl;



    return 0;
}