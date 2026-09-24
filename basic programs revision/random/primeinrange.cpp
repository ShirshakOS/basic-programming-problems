//the user inputs the range
//find all the prime numbers inside that range
#include<iostream>
int main()
{
    int i,j,a=3,b=23,count=0;
    for(i=a;i<=b;i++)
    {   
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
            if(count>2)
            {
                break;
            }
        }
        if(count==2)
        {
            std::cout<<i<<" ";
        }
    }
    return 0;
}