//second largest number in an array of integers
#include<iostream>
using namespace std;
int secondlargest(int a[], int size);
int main()
{
    int a[5]={1,4,2,1,1};//second largest is after the largest element
    int b[5]={1,5,6,7,0};//second largest is before the largest element
    cout<<"Second largest element of the array A: "<<secondlargest(a,5)<<endl;
    cout<<"Second largest element of the array B: "<<secondlargest(b,5)<<endl;
    return 0;
}
int secondlargest(int a[],int size)
{
    int i;
    int second=a[0], largest=a[0];
    for(i=1;i<size;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest= a[i];
        }
        if(a[i]!=largest && a[i]>second)
        {
            second= a[i];
        }
    }
    return second;
}