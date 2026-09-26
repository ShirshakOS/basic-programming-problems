#include<iostream>
int main()
{
    int num1=30,num2=50;
    int hcf=1;
    int i;
    for(i=1;i<=num1 && i<=num2;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }
    std::cout<<hcf;
    return 0;
}