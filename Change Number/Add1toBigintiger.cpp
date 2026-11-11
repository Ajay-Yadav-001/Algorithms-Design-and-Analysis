#include<iostream>
#include<string>

using namespace std;

void display(int arr[], int sze){
    int i = 0;
    while(i<sze){
        cout<<arr[i++]<<" ";
    }
}

void addone(int arr[],int size){

    int i = 0;
    arr[i]++;

    while(arr[i]>9){
        arr[i++] = 0;
        if(i==size){
            cout<<"overflow";
            return;
        }
        arr[i]++;
    }
}


int main(){
string str;
cout<<"enter the numeric string: ";
cin>>str;
int arr[str.length()];

int sze = sizeof(arr)/sizeof(arr[0]);

int i = str.length()-1;
int j = 0;

while(i>=0){
    int digit = str[i] - '0';
    arr[j++] = digit;
    i--;
}

while(j<=sze){
    arr[j++]=0;
}

display(arr,sze);

addone(arr,sze);

cout<<endl;

display(arr,sze);


return 0;
}