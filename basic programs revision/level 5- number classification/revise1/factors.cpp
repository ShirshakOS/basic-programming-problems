// program to find all the factors of a number
#include<iostream>
using namespace std;
void displayfactors(int a)
{
    int i;
    cout<<"The factors of "<<a<<" are:\n";
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        cout<<i<<" ";
    }
}
int main()
{
    int a=6;
    displayfactors(a);
    return 0;
}