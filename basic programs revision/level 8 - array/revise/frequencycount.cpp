//counting the frequency of the elements in the integer array
#include<iostream>
using namespace std;
void frequency(int a[], int size);//function declaration
int main()
{
    int a[5]={190,89,190,110,110}; //five integer numbers in an array of intergers
    int size=sizeof(a)/sizeof(a[0]);
    frequency(a,size);
    return 0;
}
void frequency(int a[], int size)
{
    int i,j,k,count;
    bool flag;
    for(i=0;i<size;i++)
    {
        flag=false;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]==a[i])
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            continue;
        }
        count=1;
        for(k=i+1;k<size;k++)
        {
            if(a[k]==a[i])
            {
                count++;
            }
        }
        cout<<a[i]<<" is repeated "<<count<<" times"<<endl;
    }
}