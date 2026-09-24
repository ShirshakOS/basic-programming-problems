#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Num1: ";
    cin>>a;
    cout<<"Num2: ";
    cin>>b;
    int choice;
	while(1)
    {
    	    cout<<"Enter 1 for addition\n";
    cout<<"Enter 2 for subtractoin\n";
    cout<<"Enter 3 for multiplication\n";
    cout<<"Enter 4 for division\n";
    cout<<"Enter 0 to exit\n";
    cout<<"Choice: ";
    cin>>choice;
    if(choice==0)
    {
    	break;
	}
	if(choice==1)
	{
		cout<<"The addition of "<<a<<" and "<<b<<" is: "<<(a+b)<<endl;
	}
	if(choice==2)
	{
		cout<<"The difference of "<<a<<" and "<<b<<" is: "<<((a>b)?(a-b):(b-a))<<endl;
	}
	if(choice==3)
	{
		cout<<"The product of "<<a<<" and "<<b<<" is: "<<(a*b)<<endl;
	}
	if(choice==4)
	{
		cout<<"The quotient of "<<a<<" and "<<b<<" is: "<<((a>b)?(a/b):(b/a))<<endl;
	}
	}
}
