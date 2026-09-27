//reverse
#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,3};
    int i, j=2, temp;
    for(i=0;i<2;i++)
    {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j--;
    }
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}