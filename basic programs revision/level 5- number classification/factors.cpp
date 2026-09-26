#include<iostream>
int main()
{
    int n=90;
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}