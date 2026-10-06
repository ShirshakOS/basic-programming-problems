// sort the numbers of array in ascending order
#include<iostream>
using namespace std;
int main()
{
    int a[5]={4,5,1,5,7};
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}