#include <iostream>
using namespace std;

int main() {
    string str = "he played chess.";
    string target = "chess";
    bool found = false;

    int textLength = str.length();
    int targetLength = target.length();

    for (int i = 0; i <= textLength - targetLength; i++) {
        int j = 0;
        while (j < targetLength && str[i + j] == target[j]) {
            j++;
        }

        if (j == targetLength) {
            cout << "Word found at index: " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Word not found";
    }
    return 0;
}