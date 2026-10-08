// merge two arrays
#include <iostream>
using namespace std;
void merge(int a[], int m, int b[], int n, int c[]);
int main()
{
    int a[7] = {2, 4, 6, 8, 10, 12, 14};
    int b[5] = {1, 3, 5, 7, 9};
    int c[100];
    merge(a, 7, b, 5, c);
    for (int i = 0; i < 12; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
void merge(int a[], int m, int b[], int n, int c[])
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    while (j < n)
    {
        c[k] = b[j];
        j++;
        k++;
    }
}