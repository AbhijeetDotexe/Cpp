//WAP to implement Symmetric Matrix using one-dimensional array
#include <iostream>
using namespace std;

class Transpose
{
    int *a;
    int size;

public:
       Transpose(int size=0)
       {
        if(size>0)
        {
            this->size=size;
            a=new int [size];
        }
        else
        {
            throw("Enter a non-zero positive size ");
        }
       }
       void set_values(int rows)
       {
           cout<<"Enter lower triangle elements "<<endl;
           for(int i=0; i<size-rows; i++)
           cin>>a[i];

           cout<<"Enter diagonal elements"<<endl;
           for(int i=size-rows;i<size;i++)
           cin>>a[i];
       }
       int get_values(int i,int j,int rows)
       {
        if(i<0 || i>=size || j<0 ||j>=size)
            throw("index out of bounds");
        else if(i>j)
            return a[i*(i-1)/2+j];
        else if(i<j)
            return a[j*(j-1)/2+i];
        else
            return a[size-rows+i];
       }
};
int main()
{
    try
    {
    int row,col;
    char choice='y';
    while(choice=='y'||choice=='Y')
    {
    cout<<"Enter the number of rows ";
    cin>>row;
    cout<<"Enter the number of columns ";
    cin>>col;

    if(row!=col)
    throw ("Should be a square matrix ");

    Transpose T((row*(row-1)/2)+row);
    T.set_values(row);


    cout<<"Symmetric matrix is as follows"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
         cout<<T.get_values(i,j,row)<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter y or Y to continue OR 0 TO EXIT";
    cin>>choice;
    }
    }
    catch(const char*e)
    {
      cout<<"Exception : "<<e;
    }
    return 0;
}

