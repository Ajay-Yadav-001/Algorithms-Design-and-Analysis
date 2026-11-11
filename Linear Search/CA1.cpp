#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int key, int i){
    if(arr[i] == key){
        cout<< "Value Founded on " << i <<"th Index ";
        return arr[i];
    }else{
        LinearSearch(arr[], size,  key, i++);
    }
    return -1;
}

int main(){
    //size initialization for array
    int size;
    cout<<"Enter size of Array: ";
    cin>>size;
    
    //declaration of array
    int arr[size];
    for(int j = 0; j<size; j++){
        cout<< "Enter value for " << j << "th Index: ";
        cin>>arr[j];
    }
    //key for search value
    int key;
    cout<< "Enter a key for Search: "; 
    cin>> key;

    int i = 0;

    int result = LinearSearch(arr[], size, key, i);
    cout<<endl<<"Task Done.";
 
    return 0;
}