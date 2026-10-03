//count the number of factors of a number n
#include<iostream>
using namespace std;
int countfactors(int a)
{
    int count=0,i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        count++;
    }
    return count;
}
int main()
{
    int n=6;
    cout<<"Number of factor: "<<countfactors(n);
    return 0;
}