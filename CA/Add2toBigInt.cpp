#include <iostream>
using namespace std;

void add(int a[], int b[], int n)
{
    int carry = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = a[i] + b[i] + carry;

        a[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry)
        cout << carry;

    for (int i = n - 1; i >= 0; i--)
        cout << a[i];
}

int main()
{
    int a[] = {9, 9, 9};
    int b[] = {1, 0, 0};

    add(a, b, 3);

    return 0;
}