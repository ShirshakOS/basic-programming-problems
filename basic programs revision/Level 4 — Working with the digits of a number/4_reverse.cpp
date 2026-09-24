// Write a program to reverse a number n.
#include<iostream>
int main()
{
    int n=213;
    int rev=0, lastdigit;
    while(n!=0)
    {
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    std::cout<<"The reversed number is: "<<rev;
    return 0;
}