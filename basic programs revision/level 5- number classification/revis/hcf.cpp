#include<iostream>
using namespace std;
int hcf(int a, int b)
{
    int gcd=1;
    int i;
    for(i=1;i<=a && i<=b;i++)   
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int a=8,b=21;
    cout<<"HCF is: "<<hcf(a,b);
    return 0;
}