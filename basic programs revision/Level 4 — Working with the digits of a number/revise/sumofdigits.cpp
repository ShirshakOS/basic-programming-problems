//Write a program to find the sum of all digits of a number n.
#include<iostream>
using namespace std;
int sumofdigits(int a);
int main()
{
    int a=123;
    cout<<"The sum of the digits in the number is: "<<sumofdigits(a)<<endl;
    return 0;
}
int sumofdigits(int a)
{
    int sum=0,rem;
    while(a!=0)
    {
        sum+=a%10;
        a=a/10;
    }
    return sum;
}