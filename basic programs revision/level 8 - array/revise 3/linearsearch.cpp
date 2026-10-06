// linear search
// return the index of required element in the array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int num=0;
    bool flag=false;
    for(int i=0;i<5;i++)
    {
        if(a[i]==num)
        {
            cout<<i;
            flag=true;
        }
    }
    if(flag)
    {

    }
    else
    {
        cout<<"Number is not present in the array";
    }
    return 0;
}