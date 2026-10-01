//write a program to reverse a number
#include<iostream>
using namespace std;
int reverse(int a);
int main()
{
    int a=1902;
    cout<<"The reversed number is: "<<reverse(a);
    return 0;
}
int reverse(int a)
{
    int rev=0, rem;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    return rev;
}