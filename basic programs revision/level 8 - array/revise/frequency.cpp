//count the frequency of an element in the array
#include<iostream>
void frequence(int a[],int n);
int main()
{
    int a[8]={2,2,2,3,3,3,4,4};
    int b[11]={1,2,3,1,2,3,1,2,3,5,5};
    frequence(a,8);
    frequence(b,11);
    return 0;
}
void frequence(int a[],int n)
{
    int count, i, j, k;
    bool repeated;
    for(i=0;i<n;i++)
    {
        repeated = false;
        for(k=i-1;k>=0;k--)
        {
            if(a[k]==a[i])
            {repeated=true;
            break;
            }
        }
        if(repeated)
        {
            continue;
        }
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        std::cout<<a[i]<<" is repeated "<<count<<" times"<<std::endl;
    }
}