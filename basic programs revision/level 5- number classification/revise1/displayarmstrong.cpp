//display armstrong numbers from one to n
#include<iostream>
#include<math.h>
using namespace std;
void displayarmstrong(int a)
{
    int i,count, arm,rem;
    for(i=1;i<=a;i++)
    {
        arm=0;
        int temp=i;
        count=0;
        while(temp)
        {
            count++;
            temp/=10;
        }
        int temp2=i;
        while(temp2)
        {
            rem=temp2%10;
            arm=arm+pow(rem,count);
            temp2/=10;
        }
        if(i==arm)
        cout<<i<<" ";
    }
}
int main()
{
    int a=2000;
    displayarmstrong(a);
    return 0;
}