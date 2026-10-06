// write a program to merge two arrays into one
#include<iostream>
using namespace std;
int main()
{
    int a[5]={2,4,6,8,10};
    int b[7]={1,3,5,7,9,11,13};
    int c[100];
    int i=0,j=0,k=0;
    while(i<5 && j<7)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<5)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<7)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    for(int x=0;x<k;x++)
    {
        cout<<c[x]<<" ";
    }
    return 0;
}