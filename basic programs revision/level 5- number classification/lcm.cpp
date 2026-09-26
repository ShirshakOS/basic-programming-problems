//lowest common multiple
#include<iostream>
int main()
{
    int n1=12, n2=24;
    int i=2;
    while(1)
    {
        if(i%n1==0 && i%n2==0)
        {
            std::cout<<i;
            break;
        }
        i++;
    }
    return 0;
}