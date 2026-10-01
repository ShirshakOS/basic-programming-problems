//count the frequency of the elements in an array
#include<iostream>
void count(int a[], int size);
using namespace std;
int main()
{
    int a[4]={1,2,3,1};
    int size=sizeof(a)/sizeof(a[0]);
    count(a,size);
    return 0;
}
void count(int a[], int size)
{
    int i,j,k,count;
    bool flag;
    for(i=0;i<size;i++)
    {
        flag = false;
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
        else{
        count =1;
        for(k=i+1;k<size;k++)
        {
            if(a[i]==a[k])
            {
                count++;
            }
        }
        cout<<a[i]<<" is repeated "<<count<<" times\n";
    }
    }
}