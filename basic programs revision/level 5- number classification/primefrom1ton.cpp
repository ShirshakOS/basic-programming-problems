#include<iostream>
int main()
{
    int n=20;
    int i,j;
    int count=0;
    for(i=1;i<=n;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}