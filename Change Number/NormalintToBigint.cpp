#include <iostream>
using namespace std;

void make_int(int A[], int no){
    int i = 0;

    while(no){
        A[i++] = no % BASE;
        no /= BASE;
    }
    while(i < n){
        A[i++] = 0;
    }
    return;
}
int main(){
    int n;
    cin >> n;
    int[] A = new int[n];
    for(int i = 0; i < n; i++){
        cin>>A[i];
    }
    cout<< make_int(A[], n);
    return 0;
}
