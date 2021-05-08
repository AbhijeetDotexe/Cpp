#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{   
    int *ptr;
    int n,sum=0;
    float avg=0;
    cout<<"Enter the Number of elements You want in the array : ";
    cin>>n;
    ptr= (int*)malloc(sizeof(int));
    if(ptr == NULL)
    {
        cout<<"The required amount of memory is not available ! "<<endl;
        exit(0);

    }
    else
    {
        cout<<"Enter the elements in the array : "<<endl;
        for(int i=1;i<=n;i++)
        {
            cin>>(*(ptr+i));
            
        }
        for(int i=1;i<=n;i++)
        {
            sum=sum+(*(ptr+i));
        }
        cout<<"The sum of all the elements in the array is : "<<sum<<endl;
        avg=sum/n;
        cout<<"The average of the elements in the array is : "<<avg<<endl;
        
    }


    return 0;
}