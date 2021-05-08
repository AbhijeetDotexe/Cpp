#include<iostream>
using namespace std;
int main()
{
    enum Meal{Breakfast,Lunch,Dinner};
    cout<<Breakfast<<endl;
    cout<<Lunch<<endl;
    cout<<Dinner<<endl;
    Meal m1 = Breakfast;
    cout<<m1<<endl;
    return 0;
}