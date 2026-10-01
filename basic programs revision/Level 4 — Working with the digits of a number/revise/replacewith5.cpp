//write a program to replace all the 0 in a number with 5
#include<iostream>
using namespace std;
int replace(int a);
int main()
{
    int a=1209;
    cout<<"Replaced 0 with 5 "<<replace(a)<<endl;
    return 0;
}
int replace (int a)
{
    int num=0;
    while(a!=0)
    {
        if(a%10==0)
        {
            num=num*10+5;
        }
        else{
            num=num*10+(a%10);
        }
        a/=10;
    }
    int rev=0;
    while(num!=0)
    {
        rev=rev*10+(num%10);
        num/=10;
    }
    return rev;
}