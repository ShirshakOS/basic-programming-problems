//count the frequency of the elements in an integer array
#include<iostream>
using namespace std;
void frequency(int a[]);
int main()
{
    int a[6]={190,819,2121,190,2121,11};
    frequency(a);
    return 0;
}
void frequency(int a[])
{
    int i,j,k;// check if the number has already occured previously or not 
    int count;
    bool flag;
    for(i=0;i<6;i++)
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
        else
        {
            count=1;
            for(k=i+1;k<6;k++)
            {
                if(a[i]==a[k])
                {
                    count++;
                }
            }
        }
        cout<<a[i]<<" has occured "<<count<<" times"<<endl;
    }
}