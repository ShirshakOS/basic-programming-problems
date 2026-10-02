//multiplication table of a number n
#include<iostream>
using namespace std;
void multiplication(int a)
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<a<<"*"<<i<<":"<<(a*i)<<endl;
    }
}
int main()
{
    int n=4;
    multiplication(4);
    return 0;
}