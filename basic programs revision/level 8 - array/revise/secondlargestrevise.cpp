#include<iostream>
using namespace std;
int secondlargest(int a[],int n);
int main()
{
    int a[5]={3,5,7,10,9};
    int b[10]={3,1,3,5,4,11,2,1,2,3};
    cout<<"Second largest in array A: "<<secondlargest(a,5)<<endl;
    cout<<"Second largest in array B: "<<secondlargest(b,10)<<endl;
    return 0;
}
int secondlargest(int a[], int n)
{
    int i, second=a[0], largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        if(a[i]!=largest && a[i]>second)
        {
            second=a[i];
        }
    }
    return second;
}