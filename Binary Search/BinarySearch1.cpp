#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;
    cin>>target;
    int  index;
    for(int i = 0; i < 10; i++){
        if(target==arr[i]){
            index = i;
            break;
        }
    }
    cout<< "Target \"" << target <<"\" Found in " << "arr[" << index << "]";

    return 0;
}
