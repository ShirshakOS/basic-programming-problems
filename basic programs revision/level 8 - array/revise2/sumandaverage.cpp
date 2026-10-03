// sum and average of all the elements of an array
#include<iostream>
using namespace std;
int Sum(int a[]);
float avg( int sum);
int main()
{
    int a[5]={2,4,6,8,11};
    int sum=Sum(a);
    cout<<"The sum of all the elements in the array is: "<<sum<<endl;
    cout<<"The average of the elements in the array is: "<<avg(sum);
    return 0;
}
int Sum(int a[])
{
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    return sum;
}
float avg(int sum)
{
    return (sum/5.0);
}
