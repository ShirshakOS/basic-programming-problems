//Write a program to count the number of even digits and odd digits in a number n.
#include<iostream>
using namespace std;
void evenandodd(int a);
int main()
{
    int a=1234;
    evenandodd(a);
    return 0;
}
void evenandodd(int a)
{
    int evencount=0, oddcount=0;
    while(a!=0)
    {
        if((a%10)%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
        a/=10;
    }
    cout<<"Even count: "<<evencount<<endl;
    cout<<"Odd count: "<<oddcount<<endl;
}