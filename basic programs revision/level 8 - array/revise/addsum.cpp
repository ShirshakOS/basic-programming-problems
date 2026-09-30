//add sum
#include<iostream>
using namespace std;
int addsum(int num);
int main()
{
    int num=257;
    cout<<"Ans: "<<addsum(num);
    return 0;
}
int addsum(int num)
{
    int count=0, temp=num,rem,sum;
    while(1)
    {   
        sum=0;
        count=0;
        while(temp!=0)
        {
            rem=temp%10;
            sum+=rem;
            count++;
            temp=temp/10;
         }
         temp=sum;
        if(count==1)
        {
            break;
        }
    }
    return temp;
}