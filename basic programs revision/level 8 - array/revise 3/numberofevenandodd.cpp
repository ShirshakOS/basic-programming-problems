//number of even and odd elements in an array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int evencount=0, oddcount=0;
    for(int i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout<<"Number of even elements: "<<evencount<<endl;
    cout<<"Number of odd elements: "<<oddcount<<endl;
    return 0;
}