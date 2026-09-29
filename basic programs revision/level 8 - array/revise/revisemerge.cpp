//merge sorted revise
// SORTED ARRAY REMEMBER 
#include<iostream>
using namespace std;
void merge(int a[], int m, int b[], int n, int c[]);
int main()
{
    int a[3]={1,7,9};//first integer array
    int b[7]={2,4,5,6,8,10,11};//second integer array
    int c[100];
    merge(a,3,b,7,c);
    for(int i=0;i<10;i++)
    {
        cout<<c[i]<<" ";
    }
}
void merge(int a[], int m, int b[], int n, int c[])
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
        else{
            c[k]=b[j];
            k++;
            j++;
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