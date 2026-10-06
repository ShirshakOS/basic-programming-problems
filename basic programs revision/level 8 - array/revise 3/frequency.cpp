//count the frequency of elements in the array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,2,2,4};
    int count,i,j,k;
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
        cout<<a[i]<<" is repeated "<<count<<" times "<<endl;
    }
    return 0;
}