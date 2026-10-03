// lcm
#include<iostream>
using namespace std;
int lcm(int a, int b)
{
    int i=1, lcm;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i++;
    }
    return lcm;
}
int main()
{
    int a=6, b=24;
    cout<<"LCM is: "<<lcm(a,b);
    return 0;
}