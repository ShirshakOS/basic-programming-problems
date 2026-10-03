//print all prime numbers upto n
#include<iostream>
using namespace std;
void printprime(int n);
int main()
{
    int n=25;
    printprime(n);
    return 0;
}
void printprime(int n)
{
    int i,j,count;
    for(i=2;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            cout<<i<<" ";
        }
    }
}