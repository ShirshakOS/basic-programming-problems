#include<iostream>
#include<math.h>
int main()
{
    int n=153;
    int arm=0, lastdigit;
    int temp=n;
    while(n!=0)
    {
        lastdigit=n%10;
        arm+=pow(lastdigit,3);
        n=n/10;
    }
    if(temp==arm)
    std::cout<<"Armstrong";
    else
    std::cout<<"Not armstrong";
    return 0;

}