#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){

    int arr[] = {20,21,22,23,24,25,30,31,32,33,34,35,40,41,42,43,44,45};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int index = binarySearch(arr,size,target);
   
    if (index != -1)
        cout << "Target \"" << target << "\" found at arr[" << index << "]";
    else
        cout << "Target \"" << target << "\" not found";

    // cout<< "Target \"" << target <<"\" Found in " << "arr[" << index << "]";

    return 0;
}
