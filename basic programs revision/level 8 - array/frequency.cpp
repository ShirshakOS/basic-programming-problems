//count the frequency of an element in the array
#include<iostream>
using namespace std;
void frequency(int a[])
{
    int i,j,k;
    int count;
    bool common;
    for(i=0;i<5;i++)
    {
        common = false; //resets the common variable to false
        for(k=i-1;k>=0;k--) //checks if the element in ith has already occured before
        {
            if(a[k]==a[i])
            {
                common = true;
                break;
            }
        }
        if(common) //  if the element in ith position has occured then skip this iteration otherwise go on to the next block of code
        {
            continue;
        }
        count=1;
        for(j=i+1;j<5;j++)// check the number of occurence of the elements in the array
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        cout<<"Frequence of "<<a[i]<<": "<<count<<endl;
    }
}
int main()
{
    int a[5]={6,5,6,6,2};
    frequency(a);
    return 0;
}