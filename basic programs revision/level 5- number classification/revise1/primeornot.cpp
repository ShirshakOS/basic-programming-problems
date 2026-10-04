#include<iostream>
using namespace std;
bool isprime(int n);
int main()
{
    int a=4;
    int b=7;
    if(isprime(a))
    {
        cout<<a<<" is a prime number\n";
    }
    else cout<<a<<" is not a prime number\n";
    if(isprime(b))
    {
        cout<<b<<" is a prime number\n";
    }
    else 
    cout<<b<<" is not a prime number\n";
    return 0;
}
bool isprime(int a)
{
    int i;
    int count=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    if(count==2)
    return true;
    else return false;
}