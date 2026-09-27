//reverse
//two pointers are useful when you need to work from two position
#include<iostream>
int main()
{
    int n;
    using namespace std;
    cout<<"How many elements in the array?: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<": ";
        cin>>a[i];
    }
    int j=n-1, temp;
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i] = a[j];
        a[j] = temp;
        j--;
    }
    cout<<"Array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}