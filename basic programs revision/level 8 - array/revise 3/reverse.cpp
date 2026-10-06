// reverse element of array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,6,8,10};
    int i,j=4;
    for(i=0;i<5/2;i++)
    {
        int temp;
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
        j--;
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}