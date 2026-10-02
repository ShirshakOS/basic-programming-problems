//program to display natural numbers from 1 to n in reverse order
#include<iostream>
using namespace std;
void display(int n)
{
    int i;
    for(i=n;i>0;i--)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n=5;
    display(n);
    return 0;
}