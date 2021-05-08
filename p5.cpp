#include<iostream>
using namespace std;
int main()
{    
    int i,n=18;
    cout <<"Enter your age : " ;
    cin>>i ;
    cout<<endl;
    if(i<n)
    {
        cout<<"OOPS ! Your are not eligible for a driving license "<<endl;

    } 
    else if(i>=18 && i<=21)
    {
        cout<<"You can only get a learning driving license !"<<endl;

    }
    else
    {
        cout<<"Your are eligible for a driving license,\nGood luck for your driving test !"<<endl;
    }





    return 0;
}