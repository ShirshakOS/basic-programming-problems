// to count the frequency of an element in the array 
// first you have to check if the element in the current index has appearted before its turn
// if it has appearted then you have to skip this index's element because it's count has already been done
// if not appeared before/ if not counted before then you have to count it by iterating every elements forward to it checking if they are equal
#include<iostream>
using namespace std;
void frequency(int a[]);
int main()
{
    int a[8]={11,88,90,90,22,88,11,11}; // 11=3, 88=2, 90=2, 22=1
    frequency(a);
    return 0;
}
void frequency(int a[])
{
    int i,j,k,count;
    bool flag;
    for(i=0;i<8;i++)
    {
        flag = false;
        for(j=i-1;j>=0;j--) //checking the elements before the current indexed element
        {
            if(a[i]==a[j])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            continue;
        }
        
        else{
            count=1;
            for(k=i+1;k<8;k++) // counting the elements
            {
                if(a[i]==a[k])
                {
                    count++;
                }
            }
            cout<<a[i]<<" has occured "<<count<<" times"<<endl;
        }
    }
}