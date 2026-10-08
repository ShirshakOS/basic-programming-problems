// higest common factors
#include <iostream>
using namespace std;
int main()
{
    int a = 17, b = 790;
    int hcf;
    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF is: " << hcf << endl;
    return 0;
}