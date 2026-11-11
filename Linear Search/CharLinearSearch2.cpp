#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch[5] = {'A', 'B', 'C', 'D', 'E'};
    char key;
    bool found = false;

    cout << "Enter character to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (ch[i] == key)
        {
            cout << "Character found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Character not found";

    return 0;
}