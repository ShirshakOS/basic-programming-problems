//palindrome or not
#include<iostream>
using namespace std;
void palindrome(int a)
{
    int temp=a, rev=0, rem;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(temp==rev)
    {
        cout<<"The number is palindrome";
    }
    else
    {
        cout<<"The number is not palindrome";
    }
}
int main()
{
    palindrome(9);
}