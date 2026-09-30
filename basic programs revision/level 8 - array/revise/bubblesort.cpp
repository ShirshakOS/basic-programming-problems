//bubble sort algorithm using template function 
#include<iostream>
using namespace std;
template<class T>
void Bubble1(T a[]);
int main()
{
    int a[5]={3,1,4,6,9};
    cout<<"Integer sorting:\n";
    Bubble1(a);
    float b[5]={3.1,8.9,9.2,4.5,7.8};
    cout<<"\nFloat sorting: \n";
    Bubble1(b);
    return 0;
}
template<class T>
void Bubble1(T a[])
{
    int i,j;
    T temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout<<"{";
    i=0;
    while(i<5)
    {
        cout<<a[i]<<",";
        i++;
    }
    cout<<"}";
}