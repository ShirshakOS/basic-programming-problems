// write a program to find the number of even and odd elements in the array
#include<iostream>
using namespace std;
void count(int a[], int &even, int &odd); // Value pass by reference
int main()
{
    int a[5]={1,2,3,4,5};
    int even, odd;
    count(a,even,odd);
    cout<<"The number of even elements: "<<even<<endl;
    cout<<"The number of odd elements: "<<odd<<endl;
    return 0;
}
void count(int a[], int &even, int &odd) // passing by reference
{
    even=0;
    odd=0;
    int i;
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
}