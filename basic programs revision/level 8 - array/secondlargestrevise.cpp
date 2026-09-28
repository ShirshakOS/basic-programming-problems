//find the second largest element from the array
#include<iostream>
int secondlargest(int a[])
{
    int i, large=a[0], second;
    for(i=1;i<8;i++)
    {
        if(a[i]>large) // to check the elements before the largest element in the array
        {   
            second = large;
            large=a[i];
        }
        if(a[i]>second && a[i]!=large)// to check the second largest element after the largest element in the array
        {
            second=a[i];
        }
    }
    return second;
}
int main()
{
    int a[8]={123,434,5,34,22,44,2,233};// second largest element after the largest element
    int b[8]={3232,2323,44,454,54,4554,55,33};
    std::cout<<"A: "<<secondlargest(a)<<std::endl;
    std::cout<<"B: "<<secondlargest(b)<<std::endl;
    return 0;
}