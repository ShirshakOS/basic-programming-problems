#include<iostream>
int main()
{
    int n;
    using namespace std;
    cout<<"How many elements in the array?: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Displaying all the elements of the array: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}