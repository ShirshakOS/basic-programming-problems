//largest and smallest element in an array
#include<iostream>
using namespace std;
int main()
{
    int a[10]={12,443,291,990,1001,2,901,789,199,903};
    int largest = a[0], smallest=a[0];
    for(int i=1;i<10;i++)
    {
        if(a[i]<smallest)
        smallest=a[i];
        if(a[i]>largest)
        largest=a[i];
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest;
    return 0;
}