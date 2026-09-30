// sum and average of all the integers in the array
#include<iostream>
using namespace std;
void ans(int a[], int size)
{
    int i,sum=0,avg;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    avg=sum/size;
    cout<<"The sum of all the elements in the array is: "<<sum<<endl;
    cout<<"The average the element is: "<<avg;
}
int main()
{
    int a[5]={2,2,2,2,2};
    ans(a,5);
    return 0;
}