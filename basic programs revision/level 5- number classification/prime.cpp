#include<iostream>
int main()
{
    int n=19;
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        std::cout<<"Prime";
    }
    else
    std::cout<<"Composite";
    return 0;
}