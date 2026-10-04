//program to find the hcf of a two numbers
#include<iostream>
using namespace std;
int hcf(int a, int b);
int main()
{
    int a=12;
    int b=24;
    cout<<"The hcf of "<<a<<" and "<<b<<" is: "<<hcf(a,b)<<endl;
    return 0;
}
int hcf(int a, int b)
{
    int gcd=1;
    int i=1;
    while(i<=a && i<=b) // the loop continues 
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
        i++;
    }
    return gcd;
}