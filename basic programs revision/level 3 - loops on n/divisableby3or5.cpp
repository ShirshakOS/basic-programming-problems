// program to display the numbers that are divisable by 3 or 5 upto n numbers
#include<iostream>
using namespace std;
void display(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n=20;
    display(n);
    return 0;
}