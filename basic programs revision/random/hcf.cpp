//gdc of two numbers
#include<iostream>
int main()
{
    int a=6,b=21;
    int i,gdc=1;
    for(i=2;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gdc=i;
        }
    }
      std::cout<<"GDC is: "<<gdc;
    return 0;
}