//. WAP to calculate GCD of 2 number (i) with recursion (ii) without recursion
#include <iostream>
using namespace std;
int recurGCD(int n1, int n2);
void iterGCD(int n1, int n2);

int main()
{
	int num1=0;
	int num2=0;
	int ch=0;
	
	cout<<"enter 2 numbers whose GCD you want: ";
	cin>>num1>>num2;
	cout<<endl;

	cout<<"enter 1 for recursive method, 2 for iterative"<<endl;
	cin>>ch;
	cout<<endl;

	if(ch==1)
	{
		cout<<"GCD= "<<recurGCD(num1, num2);
	}
	else
	{
		iterGCD(num1, num2);
	}

return 0;
}
int recurGCD(int n1, int n2)
  {
	if(n2!=0)
		return recurGCD(n2, n1%n2);
	else
		return n1;
  }

void iterGCD(int n1, int n2)
  {
	while(n1!=n2)
	{
		if(n1>n2)
		n1-=n2;
		else
		n2-=n1;
	}
	cout<<"GCD= "<<n1;
  }

