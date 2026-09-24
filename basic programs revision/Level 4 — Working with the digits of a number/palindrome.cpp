//palindrome or not
#include<iostream>
int main()
{
    int n=1213;
    int rev=0, lastdigit;
    int temp=n;
    while(n!=0)
    {
        lastdigit=n%10;
        rev=rev*10+lastdigit;
        n=n/10;
    }
    if(rev==temp)
    {
        std::cout<<"The number is palindrome\n";
    }
    else{
        std::cout<<"The number is not palindrome";
    }

}