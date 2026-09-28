//print the elements of an array in reverse without changing the position of the array
#include<iostream>
int main()
{
    int a[5]={4,2,1,4,5};
    for(int i=4;i>=0;i--)
    {
        std::cout<<a[i]<<" ";
    }
    return 0;
}