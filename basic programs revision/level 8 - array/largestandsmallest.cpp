//largest and smallest number in the array
#include<iostream>
int main()
{
    using namespace std;
    int n=5, array[5],i;
    cout<<"Enter the elements of the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    //finding the largest and smallest in the array using sorting of the array
    int largest, smallest;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {
                int temp;
                temp = array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"The largest element is: "<<array[4]<<endl;
    cout<<"The smallest element is: "<<array[0];
    return 0;
    //this program uses ascending sorting of the elements 
    //Hence the first element is the smallest while the last element in the array is the largest
}