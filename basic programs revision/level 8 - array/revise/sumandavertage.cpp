//find the sum and average of the elements of the array
#include<iostream>
using namespace std;
int sum(int a[], int n);
float average(int n, int sum);
int main()
{
    int n=6;
    int a[n]={1,2,3,4,5,6};
    int sm=sum(a,n);
    cout<<"The sum of the elements of the array is: "<<sm<<endl;
    cout<<"The average of all the elements of the array is: "<<average(n,sm);
    return 0;
}
int sum(int a[], int n)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;
}
float average(int n, int s)
{
    return ((float)s/n);
}