#include <iostream>
#include <string>
using namespace std;

//find stringg in str

// string findString(string arr[], string Target[], int size){
//     for(int i = 1;  i<size; i++){
//         cout<< arr(i-1);
//         cout<< endl;
//     }
//     if();
    
// };

// void findString(string str, string target){
//     for(int i = 0; i<str.length(); i++){
//         if(str[i] == target){
//             cout<< target;
//         }
//     }
// };

// int main(){

//     string arr[] = {"Amit Kumar is a person who liven in Delhi"};
//     int size = sizeof(arr) / sizeof(arr[0]);  
//     string Target[] = {"Amit Kumar"};


//     cout<< findString(arr, Target) << endl;

//     return 0;
// }
int main()
{
    string name[5] = {"VIKASH", "ANIKET", "SANJAY", "ANIL", "SUMAN"};
    string key;
    bool found = false;

    cout << "Enter name to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (name[i] == key)
        {
            cout << "Name found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Name not found";

    return 0;
}