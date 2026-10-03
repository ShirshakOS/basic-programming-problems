//write a program to read n elements in an array and print them
#include<iostream>
using namespace std;
void get(int a[], int n);
void show(int a[], int n);
int main()
{
    int n;
    cout<<"How many elements in the array?: ";
    cin>>n;
    int a[n];
    get(a,n);
    show(a,n);
    return 0;
}
void get(int a[], int n)
{
    cout<<"Reading...\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i<<": ";
        cin>>a[i];
    }
}
void show(int a[], int n)
{
    cout<<"Displaying the elements of the array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i<<": "<<a[i]<<endl;
    }
}