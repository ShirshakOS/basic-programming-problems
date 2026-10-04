// display all prime numbers from 1 to n
#include<iostream>
using namespace std;
void display(int a);
int main(){
    int n=25;
    cout<<"All prime numbers from 1 to "<<n<<":\n";
    display(n);
    return 0;
}
void display(int a)
{
    int i,j,count;
    for(i=2;i<=a;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        cout<<i<<" ";
    }
}