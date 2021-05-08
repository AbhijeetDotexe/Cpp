#include<iostream>
using namespace std;
int c=45;
int main()
{   
    int a,b,c;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=a+b;
    cout <<"The sum of a and b is : "<< c ;
    cout<<endl;
    cout<<"The global value of c is : "<<::c;
    cout<<endl;
    float d =34.4;
    long double e =35.5;
    cout<<"The value of d is :"<<d<<endl<<"The value of e is : "<< e <<endl;
    cout<<"The value of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The value of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The value of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The value of 34.4L is : "<<sizeof(34.4L)<<endl;
    cout<<"The value of 34.5f is : "<<sizeof(34.5f)<<endl;



    return 0;
}