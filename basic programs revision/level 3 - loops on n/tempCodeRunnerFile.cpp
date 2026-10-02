//display all the even numbers from 1 to n
#include<iostream>
using namespace std;
void display(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n=10;
    display(n);
    return 0;
}