//sum of first and last digit
#include<iostream>
int main()
{
    int n=2121;
    int lastdigit=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    int firstdigit=n;
    int sum=firstdigit+lastdigit;
    std::cout<<"The sum of first and last digit is: "<<sum;
    return 0;
}