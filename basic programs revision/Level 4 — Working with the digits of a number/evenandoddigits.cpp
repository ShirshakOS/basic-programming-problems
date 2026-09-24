//Write a program to count the number of even digits and odd digits in a number n.
#include<iostream>
int main()
{
    int n=1234;
    int counteven=0, countodd=0;
    int lastdigit;
    while(n!=0)
    {
        lastdigit=n%10;
        if(lastdigit%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
        n=n/10;
    }
    using namespace std;
    cout<<"Even digit count: "<<counteven<<endl<<"Odd digit count: "<<countodd<<endl;
    return 0;
}