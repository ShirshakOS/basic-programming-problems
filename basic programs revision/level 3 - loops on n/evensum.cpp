//write a program to find the sum of all even numbers from one to n
#include<iostream>
using namespace std;
int sum(int a)
{
    int i,sum=0;
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n=4;
    cout<<"Sum of even numbers: "<<sum(n);
    return 0;
}