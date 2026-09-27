//second largest element in the array
#include<iostream>
int main()
{
    long int a[6]={1,91,3,100,1,1};
    int i, largest, second=a[0];
    largest=a[0];
    //a[i]>largest{ largest=a[i];second=largest;} problem largest paxi ko second largest set gardaina
    //
    for(i=1;i<6;i++)
    {    
        if(a[i]>largest) 
        {
            largest=a[i];
        }
        if(a[i-1]>second && a[i-1]<largest)
        {
            second=a[i];
        }
    }
    std::cout<<"The second largest element is: "<<second;
    return 0;
}