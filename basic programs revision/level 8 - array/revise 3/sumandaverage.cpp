#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,8,8}; // integer array
    int i, n=10; //initialization of integer variables
    int sum=0;// accumulator variable 
    float average;
    for(i=0;i<n;i++) // Array summation
    {
        sum+=a[i]; // accumulation
    }
    average=sum/n; // average formula
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;
    return 0;
}