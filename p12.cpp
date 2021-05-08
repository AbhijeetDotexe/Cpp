#include<iostream>
using namespace std;
int main()
{
    union money // Union is used for better memory management
    {
        int rice;
        char car;
        float pound;

    };
    union money m1;
    m1.rice=24;
    m1.car='c'; // Value is overwritten so we will get a garbage value
    cout<<m1.rice<<endl;
    cout<<m1.car;
    return 0;
}
