//merging two arrays
//concept: use two pointers, one pointer will track the index of the first arrays while the other pointer will track the index of the other array
//WHILE the pointers are not greater than the number of elements in the arrays combined, continue the loop
//if the element of the array in first pointer index is greater than the other then put the value of that pointer index in the resultant array
// else put the value of other pointer index to the resultant array
// you have to increment the value of the pointer after its respective turns
//also increment the value of the pointer of the resultant array after it's value of assigned
//at last, if the arrays have unequal number of elements then the elements may be remained to put in the resultant array
// so put the condition that which ever's pointer's value is less than the number of elements in that array put that array's element in the resultant array
#include<iostream>
using namespace std;
void merge(int a[], int m, int b[], int n, int c[]);
int main()
{
    int a[5]={1,3,5,7,9};
    int b[3]={2,4,6};
    int c[8];
    merge(a,5,b,3,c);
    for(int i=0;i<8;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}
void merge(int a[], int m, int b[], int n, int c[])
{
    int i=0;// pointer of the array a
    int j=0;//pointer of the array b
    int k=0;// pointer of the resultant array c
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m) // checking the remaining elements in the array a
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n) //checking the remaining element in the array b
    {
        c[k]=b[j];
        j++;
        k++;
    }
}