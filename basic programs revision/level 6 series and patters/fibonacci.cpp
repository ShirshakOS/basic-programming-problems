#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum, n;

    cout << "Enter n: ";
    cin >> n;
    int i;
    cout << a << " " << b << " ";
    for (i = 0; i < n - 2; i++)
    {
        sum = a + b;
        cout << sum << " ";
        a = b;
        b = sum;
    }
    return 0;
}