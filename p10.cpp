#include<iostream>
using namespace std;
int main()
{
    int marks[5]={20,20,19,19,16};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"The marks in subject "<<i+1<<" are : "<<marks[i]<<endl;
    }

    //Pointers and arrays 
    int *p = marks;
       cout<<"\n\n\n\n";
       cout<<"The marks in subject 1 are : "<<*p<<endl;
       cout<<"The marks in subject 2 are : "<<*(p+1)<<endl;
       cout<<"The marks in subject 3 are : "<<*(p+2)<<endl;
       cout<<"The marks in subject 4 are : "<<*(p+3)<<endl;
       cout<<"The marks in subject 5 are : "<<*(p+4)<<endl;


    return 0;
}