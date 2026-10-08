// lcm of two numbers
// lowest common multiples
#include <iostream>
using namespace std;
int main()
{
    int a = 17, b = 80;
    int lcm, i = 1;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
        {
            lcm = i;
            break;
        }
        else
            i++;
    }
    cout << "LCM is: " << lcm << endl;
    return 0;
}