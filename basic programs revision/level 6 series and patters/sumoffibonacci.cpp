// sum of first n terms of fibonacci series
#include <iostream>
using namespace std;
int main()
{
    int sum = 1, a = 0, b = 1, term;
    int i, n;
    cout << "Enter n: ";
    cin >> n;
    for (i = 0; i < n - 2; i++)
    {
        term = a + b;
        a = b;
        b = term;
        sum += term;
    }
    cout << "The sum is: " << sum << endl;
    return 0;
}