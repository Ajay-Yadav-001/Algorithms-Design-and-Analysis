#include <iostream>
using namespace std;

void addOne(int arr[], int n)
{
    int i = 0;

    arr[i]++;

    while (arr[i] > 9)
    {
        arr[i] = 0;
        i++;

        if (i == n)
        {
            arr[i] = 1;
            n++;
            break;
        }

        arr[i]++;
    }

    for (int j = n - 1; j >= 0; j--)
    {
        cout << arr[j];
    }
}

int main()
{
    int arr[] = {9, 9, 9};
    int n = 3;

    addOne(arr, n);

    return 0;
}