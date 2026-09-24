//Write a program to display all the digits of a number n (one per line).
#include<iostream>
int main()
{
    int n=123;
    int num;
    while(n!=0)
    {
        std::cout<<(n%10)<<std::endl;
        n=n/10;
    }
    return 0;
}