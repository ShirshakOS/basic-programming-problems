//sort an array in ascending order
#include<iostream>
void Sort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        std::cout<<a[i]<<" ";
    }
}
int main()
{
    int a[5]={3,12,34,4,1};
    Sort(a);
    return 0;
}