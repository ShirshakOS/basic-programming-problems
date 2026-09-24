//largest digit of a number
#include<iostream>
int main()
{
    int n=139;
    int largest=0;
    while(n!=0)
    {
        if(n%10>largest)
        {
            largest=n%10;
        }
        n=n/10;
    }
    std::cout<<"The largest digit is: "<<largest<<std::endl;
    return 0;
}