//replace 0 with 5
#include<iostream>
int main()
{
    int n=102;
    int rem,num=0;
    while(n!=0)
    {
        rem=n%10;
        if(rem==0)
        num=num*10+5;
        else
        num=num*10+rem;
        n=n/10;
    }
    while(num!=0)
    {
        std::cout<<(num%10);
        num=num/10;
    }
    return 0;
}