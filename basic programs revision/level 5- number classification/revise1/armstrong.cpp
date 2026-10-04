// armstrong number
#include<iostream>
#include<math.h>
using namespace std;
bool armstrong(int a);
int main()
{
    int a=1634;
    int b=153;
    if(armstrong(a))
    {
        cout<<a<<" is an armstrong numbers\n";
    }
    else cout<<a<<" is not an armstrong number\n";
    if(armstrong(b))
    {
        cout<<b<<" is an armstrong number\n";
    }
    else
    {
        cout<<b<<" is not an armstrong number";
    }
    return 0;
}
bool armstrong(int a)
{
    int count=0;
    int temp=a;
    while(temp)
    {
        count++;
        temp/=10;
    }
    int temp2=a;
    int arm=0, rem;
    while(temp2)
    {
        rem=temp2%10;
        arm+=pow(rem,count);
        temp2/=10;
    }
    if(arm==a)
    {
        return true;
    }
    else
    return false;
}