//merge two sorted arrays
#include<iostream>
using namespace std;
void Merge(int a[], int m, int b[], int n, int c[]);
int main()
{
    int a[5]={2,4,6,8,10};
    int b[5]={1,3,5,7,9};
    int c[10];
    Merge(a,5,b,5,c);
    for(int i=0;i<10;i++) // printing the merged array
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
void Merge(int a[], int m, int b[], int n, int c[])
{
    int i=0, j=0, k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    if(j<n)
    {
        c[k]=b[j];
        k++;
        j++;
    }
}
