//Fibonacci series using
//1.Using recursion
//2.Using iteration
#include<iostream>
using namespace std;
int recur(int n);

int main()
{
  int i,n,ch;
  cout<<"\t Fibonacci Series ";
  cout<<"\n Enter the no. upto which you want to display series:";
  cin>>n;
  cout<<"\n MENU ";
  cout<<"\n 1.Using recursion ";
  cout<<"\n 2.Using iteration ";
  cout<<"\n Enter your choice=";
  cin>>ch;
  switch(ch)
  { case 1:cout<<"\n Fibonacci series:";
	   for(i=0;i<n;i++)
	      { int x;
		x=recur(i);
		cout<<" "<<x;
	      }
	   break;
   case 2:cout<<"\n Fibonacci series:";
	   int f=0,s=1,t;
	   cout<<f<<" "<<s<<" ";
	   for(i=1;i<n-1;i++)
	    { t=f+s;
	     cout<<t<<" ";
	     f=s;
	     s=t;
	    }
	   break;
  }

}

int recur(int n)
{ if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return (recur(n-1)+recur(n-2));
}

