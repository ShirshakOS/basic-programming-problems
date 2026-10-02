//sum of all natural numbers from one to n;
#include<iostream>
using namespace std;
int sum(int n)
{
    int i;
    int sum=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n=6;
    cout<<"Sum is: "<<sum(n);
    return 0;
}