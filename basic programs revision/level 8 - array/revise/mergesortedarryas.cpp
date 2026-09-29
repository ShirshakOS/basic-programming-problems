//merge two arrays
#include<iostream>
using namespace std;
void merge(int a[], int m, int b[], int n, int c[]);
int main()
{
    int a[5]={1,3,5,7,9}; //first array
    int b[6]={2,4,6,8,10,11}; //second array
    int c[11];
    merge(a,5,b,6,c);
    for(int i=0;i<11;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
void merge(int a[], int m, int b[], int n, int c[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n)
    {
        c[k]=b[j];
        j++;
        k++;
    }
}   