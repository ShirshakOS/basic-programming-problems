//program to find the sum and average of all the elements in an array
#include<iostream>
int main()
{
    int n;
    using namespace std;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];//take the elements for the array a
    }
    int average, sum=0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    cout<<"The sum of the elements is: "<<sum<<endl;
    cout<<"The average of the element is: "<<(sum/n)<<endl;
    return 0;
}