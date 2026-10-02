#include<iostream>
using namespace std;
int fact(int a)
{
    int i, fact=1;
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    cout<<"factorial of 6 is: "<<fact(6);
}