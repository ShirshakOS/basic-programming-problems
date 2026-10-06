//sum of even indexed and odd indexed element in array
#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i;
    int sumeven=0, sumodd=0;
    for(i=0;i<10;i++)
    {
        if(i%2==0)
        {
            sumeven+=a[i];
        }
        else{
            sumodd+=a[i];
        }
    }
    cout<<"Sum of even indexed element: "<<sumeven<<endl;
    cout<<"Sum of odd indexed element: "<<sumodd<<endl;  
    return 0;
}