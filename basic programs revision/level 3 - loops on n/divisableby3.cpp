// program to find how many numbers upto n are divisable by 3
#include<iostream>
using namespace std;
void divisable(int n)
{
    int i;
    int count=0;
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            cout<<i<<" ";
            count++;
        }
    }
    cout<<endl<<count<<" numbers are divisable by 3";
}
int main()
{
    int n=15;
    divisable(n);
    return 0;
}