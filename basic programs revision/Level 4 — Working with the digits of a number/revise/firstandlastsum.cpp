// write a program to find the sum of first and last digit of a number
#include<iostream>
using namespace std;
int firstandlast(int a);
int main()
{
    int a=123;
    cout<<"Sum of first and last: "<<firstandlast(a)<<endl;
    return 0;
}
int firstandlast(int a)
{
    int firstdigit;
    int lastdigit=a%10;
    while(a>10)
    {
         a/=10;
         firstdigit=a;
    }
   
    return (firstdigit+lastdigit);
}