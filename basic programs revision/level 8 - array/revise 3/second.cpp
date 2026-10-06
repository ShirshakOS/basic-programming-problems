// program to find the second largest element in an integer array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,5,4};
    int i, largest=a[0], second=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        if(a[i]!=largest && a[i]>second)
        {
            second=a[i];
        }
    }
    cout<<"The second largest element in the integer array is: "<<second<<endl;
    return 0;
}