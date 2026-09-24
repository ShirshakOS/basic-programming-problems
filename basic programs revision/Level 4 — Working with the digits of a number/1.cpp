//Write a program to count the number of digits in a number n.
#include<iostream>
int main()
{
    int n=10;
    int count=0;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    std::cout<<"The number of digits is: "<<count;
    return 0;   
}