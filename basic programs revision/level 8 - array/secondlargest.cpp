//second largest element in the array
#include<iostream>
using namespace std;
int secondlargest(int a[])
{
    int i,j,largest=a[0], second=0;
    for(i=1;i<5;i++)
    {
        if(a[i]>largest)
        {
            second = largest;
            largest=a[i];
        }
        if(a[i]>second && a[i]!=largest)
        second=a[i];
    }
    return second;
}
int main()
{
    int a[5]= {1,2,9,5,3};
    int b[5]={1,2,9,4,0};
    cout<<"A: "<<secondlargest(a)<<endl;
    cout<<"B: "<<secondlargest(b);
    return 0;
}