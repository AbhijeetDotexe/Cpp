/* Pointers- They are used to store address */
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b = &a;
    cout<<a<<endl<<"The Address of a is : "<<b<<endl;
    cout<<"The value at Address b is : "<<*b<<endl;

    // Pointer to Pointer
    int **c=&b;
    cout<<"The address of b is : "<<c<<endl;
    cout<<"The value at address c is : "<<*c<<endl;
    cout<<"The address of b is : "<<&c<<endl;
    return 0;
}