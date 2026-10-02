// wap to display all the natureal numbers upto n
#include<iostream>
using namespace std;
void display(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n=7;
    display(n);
    return 0;
}