//Write a program to count the number of digits in a number n.
#include<iostream>
using namespace std;
int countdigits(int a);
int main()
{
    int a=1920;
    cout<<"Number of digits in "<<a<<" is: "<<countdigits(a);
    return 0;
}
int countdigits(int a)
{
    int count=0;
    while(a)
    {
        count++;
        a/=10;
    }
    return count;
}