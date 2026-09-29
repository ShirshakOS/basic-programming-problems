//count the frequency of the elements present in an integer array
#include<iostream>
using namespace std;
void frequency(int a[]);
int main()
{
    int a[5]={1,2,3,1,3};// ans: 1=2, 2=1, 3=1
    frequency(a);
    return 0;
}
void frequency(int a[])
{
    int count, i,j,k;
    bool flag;
    for(i=0;i<5;i++)
    {
        flag=false;
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        continue;
        else{
            count=1;
        for(k=i+1;k<5;k++)
        {
            if(a[i]==a[k])
            {
                count++;
            }
        }
    }
    cout<<a[i]<<" has appeared "<<count<<" times"<<endl;
    }
}