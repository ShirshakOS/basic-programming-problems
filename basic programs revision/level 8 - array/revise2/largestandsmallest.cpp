// write a program to find the largest and smallest element in the array
#include<iostream>
using namespace std;
int largest(int a[])
{
    int i, largest=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    return largest;
}
int smallest(int a[])
{
    int i, smallest=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    return smallest;
}
int main()
{
    int a[5]={2,22,55,12,54};
    cout<<"The largest element in the array is: "<<largest(a)<<endl;
    cout<<"The smallest element in the array is: "<<smallest(a)<<endl;
    return 0;
}