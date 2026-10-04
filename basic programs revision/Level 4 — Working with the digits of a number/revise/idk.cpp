// Write a program to find the largest digit in a number n.
#include<iostream>
using namespace std;
int largestdigit(int a);
int main()
{
    int a=12490;
    cout<<"The largest digit of "<<a<<" is: "<<largestdigit(a);
    return 0;
}
int largestdigit(int a)
{
    int largest=0, rem;
    while(a!=0)
    {
        rem=a%10;
        if(rem<largest)
        largest=rem;
        a=a/10;
    }
    return largest;
}