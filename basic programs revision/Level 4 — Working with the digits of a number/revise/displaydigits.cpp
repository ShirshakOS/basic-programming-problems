//Write a program to display all the digits of a number n (one per line)
#include<iostream>
using namespace std;
void display(int a);
int main()
{
    int a=129;
    display(a);
    return 0;
}
void display(int a)
{
    int rem;
    while(a!=0)
    {
        cout<<a%10<<endl;
        a/=10;
    }
}