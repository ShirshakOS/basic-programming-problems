// lcm of two numbers
#include<iostream>
using namespace std;
int lcm(int a, int b)
{
    int i=1,Lcm;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            Lcm=i;
            break;
        }
        else i++;
   }
    return Lcm;
}
int main()
{
    int a=4;int b=18;
    cout<<"LCM of "<<a<<" and "<<b<<" is: "<<lcm(a,b);
    return 0;
}