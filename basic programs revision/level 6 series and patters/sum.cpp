// find the sum of first n natural numbers
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += n;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}