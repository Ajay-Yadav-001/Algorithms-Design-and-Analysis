#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    // Base condition
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return binarySearch(arr, mid + 1, end, target);
    }
    else
    {
        return binarySearch(arr, start, mid - 1, target);
    }
}

int main()
{
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter elements in sorted order: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter target: ";
    cin >> target;

    int index = binarySearch(arr, 0, size - 1, target);

    if (index != -1)
        cout << "Target \"" << target << "\" found at arr[" << index << "]";
    else
        cout << "Target \"" << target << "\" not found";

    return 0;
}