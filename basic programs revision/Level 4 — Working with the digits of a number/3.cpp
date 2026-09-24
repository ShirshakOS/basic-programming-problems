//Write a program to find the sum of all digits of a number n.
#include<iostream>
int main()
{
    int n=-1123, sum =0, lastdigit;
    while(n!=0)
    {
        lastdigit=n%10;
        sum+=lastdigit;
        n=n/10;
    }
    std::cout<<"The sum is: "<<sum<<std::endl;
    return 0;
}