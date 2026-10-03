// is the number prime or not
#include<iostream>
using namespace std;
bool isprime(int a);
int main()
{
    int a=8;
    if(isprime(a))
    {
        cout<<"The number is prime\n";
    }
    else{
        cout<<"The number is not prime number but rather it is a composite number";
    }
    return 0;
}
bool isprime(int a)
{
    int count=0;
    int i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return true;
    }
    else return false;
}