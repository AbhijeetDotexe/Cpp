//Factorial of a number using 
//1.Using recursion
//2.Using iteration
#include<iostream>
using namespace std;

long recur(int no);
int main()
{ 
  int n,ch;
  int fact=1;
  cout<<"\t Factorial of a number ";
  cout<<"\n Enter the number=";
  cin>>n;
  cout<<"\n MENU ";
  cout<<"\n 1.Using recursion ";
  cout<<"\n 2.Using iteration ";
  cout<<"\n Enter your choice:";
  cin>>ch;
  switch(ch)
  { case 1:cout<<" \n Factorial of "<<n<<" is :"<<recur(n);
	   break;
    case 2:cout<<"\n Factorial of "<<n<<" is :";
	   for(int i=n;i>=1;i--)
	    { fact=fact*i;
	    }
	   cout<<fact;
	   break;
    default:cout<<"\n Wrong choice ";
	    break;
   }
   
}

long recur(int no)
{
  if(no==1)
     return 1;
  else
    return (no*recur(no-1));
}

