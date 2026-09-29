//program to find the sum of even indexed and odd indexed element of an array
#include<iostream>
void Sum(int a[])
{
    int i,sumeven=0, sumodd=0;
    for(i=0;i<6;i++)
    {
        if(i%2==0)
        {
            sumeven+=a[i];
        }
        if(i%2!=0)
        {
            sumodd+=a[i];
        }
    }
    std::cout<<"Sum of even index: "<<sumeven<<std::endl;
    std::cout<<"Sum of odd index: "<<sumodd<<std::endl;
}
int main()
{
    int a[6]={3,1,2,4,5,9};
    //even:10 odd:12
    Sum(a);
    return 0;
}