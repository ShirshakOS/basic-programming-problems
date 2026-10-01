// a number is palindrome?
#include<iostream>
using namespace std;
bool palindromecheck(int a);
int main()
{
    int a=12123;
    if(palindromecheck(a))
    {
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
    return 0;
}
bool palindromecheck(int a)
{
    int rev=0, temp=a;
    while(a!=0)
    {
        rev =rev*10+a%10;
        a/=10;
    }
    if(temp==rev)
    {
        return true;
    }
    else
    return false;
}