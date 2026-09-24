//check whether the number is prime or not
#include<iostream>
int main()
{
    int n=2,count=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        std::cout<<"The number is prime";
    }
    else 
    std::cout<<"The numbe is not prime";
    return 0;
}