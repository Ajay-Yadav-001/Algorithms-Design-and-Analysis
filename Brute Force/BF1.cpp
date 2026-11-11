#include <iostream>
#include <algorithm>
#include <math.h> 
#include <iomanip>

using namespace std;

int main(){
    string str = "aman";
    bool b = false;
    int pos = 1;
    for(char s : str){
        if(s == 'n'){
            b = true;
            break;
        }
        pos++;
    }
    if(b == true){
        cout<< "Character Found at Position: " << pos;
    }else{
        cout<< "Not Found";
    }
    return 0;
}