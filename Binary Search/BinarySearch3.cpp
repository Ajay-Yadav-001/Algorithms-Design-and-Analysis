#include <iostream>
using namespace std;

//binary search using recursion
int binarySearch(int arr[], int start, int end, int target){
    if(start>end){
        return -1;
    }

    int mid = start + (end - start)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarySearch(arr, mid+1, end, target);
    }
    else{
        return binarySearch(arr, start, mid-1, target);
    }
}
int main(){
    //user defined array
    int size;
    cout<< "Enter Size of an array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter element for " << i+1 << "th index: ";
        cin>>arr[i];
    }

    int target;
    cout<< "Enter target: ";
    cin>>target;

    int index = binarySearch(arr, 0, size-1, target);

    if(index !=  -1){
        cout<< "Target \"" << target <<"\" FounD at arr[" << index << "]";
    }
    else{
        cout<< "Target \"" << target << "\" not found.";
    }

    return 0;
}