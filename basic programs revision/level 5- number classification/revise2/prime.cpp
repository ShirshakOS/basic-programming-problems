#include <iostream>
using namespace std;
int main()
{
    int count = 0, i;
    int n = 7;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        cout << "PRIME";
    else
        cout << "COMPOSITE";
    return 0;
}