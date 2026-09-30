//counting the frequency of an element in the array
#include<iostream>
using namespace std;
void frequency1(int a[],int size);
int main()
{
    int num[8]={1,4,5,1,4,5,9,1};
    int size=sizeof(num)/sizeof(num[0]);
    frequency1(num,size);
    return 0;
}
void frequency1(int a[], int size)
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
                flag=true;
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
            if(a[i]==a[k])
            {
                count++;
            }
        }
        cout<<a[i]<<" is repeated "<<count<<" times"<<endl;
    }
}