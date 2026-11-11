#include <iostream>
using namespace std;

int main()
{
    string str = "he played chess.";
    string target = "chess";
    bool found = false;
    for (int i = 0; i <= str.size() - target.size(); i++)
    {
        int j;
        for (j = 0; j < target.size(); j++){
            if (str[i + j] != target[j]){
                break;
            }
        }

        if (j == target.size()){
            cout << "Word found at index: " << i;
            found = true;
            break;
        }
    }

    if (!found){
        cout << "Word not found";
    }

    return 0;
}