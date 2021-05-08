#include<iostream>
using namespace std;
int main()
{ 
 
 
   int i,n=18;
    cout <<"Enter your age : " ;
    cin>>i ;
    cout<<endl;

    switch (i)
    {
    case 12 :

            cout<<"You are not eligible to come to my party, Better luck next time !"<<endl;
       
        break;
    
    case 22: 
        cout<<"You u will get a normal pass for my party !"<<endl;
        
        break;
    
    case 33: 
            cout<<"You will get a Gold pass for my party !"<<endl;
        
        break;
    
    
    }
return 0;
}