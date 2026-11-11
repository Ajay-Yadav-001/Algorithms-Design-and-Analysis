#include <iostream>
using namespace std;

int take_input_for_key(){
    int key;
    cout<< endl << "Enter a Key for search by Value(1) or Index(2): ";
    cin>> key;
    while(key != 1 && key != 2){
        key = NULL;
        cout<< endl << "Enter a Key for search by Value(1) or Index(2): ";
        cin>> key;
    }
    return key;
}

int Search_by_Value(int arr[], int size, int value){
    int result;
    for(int i = 0; i<size; i++){
        if(arr[i] == value){
            result = arr[i];
            cout << value << "Found in index \"" << i <<"\" th index." << endl;
            return result;
        }
    }
    return -1;
}

int Search_by_Index(int arr[], int size, int index){
    int result;
    for(int i = 0; i<size; i++){
        if(arr[i] == index){
            result = i;
            cout<< "Index Found in "<< i << "th Index" << endl;
            return result;
        }
    }
    return -1;
}


int main(){
    //size initialization for array
    int size;
    cout<< "Enter size of array: ";
    cin>> size;

    //array creation
    int arr[size];

    //array value initialization
    for(int i = 0; i<size; i++){
        cout<< "Enter value of " << i <<"th Index: ";
        cin>>arr[i];
    }

    //key initialization
    int key = take_input_for_key();

    int value, index;
    if(key == 1){
        cout<<"Enter Value: ";
        cin>> value;
        Search_by_Value(arr, size, value);
        cout<< "Work Done Successfully.";
    } else{
        cout<< "Enter Index : ";
        cin>> index;
        Search_by_Index(arr, size, index);
        cout<< "Work Done Successfully." << endl;
    }


    cout<< "Thanks For VISITING...................";

    return 0;
}