//find the lcm of two given numbers
#include<iostream>
int main()
{
    int a=4,b=12,i=2;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            std::cout<<i;
            break;
        }
        i++;
    }
    return 0;
}