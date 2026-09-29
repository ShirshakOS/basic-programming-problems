//second largest
#include<iostream>
using namespace std;
int secondlargest(int a[]);
int main()
{
    int a[5]={1,2,3,4,5}; // ans: 4 second largest element before the largest element
    int b[5]={1,2,3,6,5};// ans: 5 second largest element after the largest element
    cout<<"The second largest element in A: "<<secondlargest(a)<<endl;
    cout<<"The second largest element in B: "<<secondlargest(b)<<endl;
    return 0;
}
int secondlargest(int a[])
{
    int i, second=a[0], largest=a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        if(a[i]!=largest && a[i]>second)
        {
            second = a[i];
        }
    }   
    return second;
}