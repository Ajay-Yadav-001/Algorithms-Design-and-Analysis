//1:- WRITE A CPP PROGRAMME TO CONVERT AN INTEGER TO A FLOAT AND DISPLAY BOTH THE VALUES.
//2:-  A CPP PROGRAMME TO DOMONSTRATE IMPLICIT CONVERTION BY ASSIGNING AN INTEGER VALUE TO A FLOAT VALUE.
#include <iostream>
#include <typeinfo>
using namespace std;

int main() {

    // Task 1: Explicit Type Conversion
    int num = 10;
    float fnum;

    fnum = (float)num;

    cout << "Task 1: Explicit Type Conversion" << endl;
    cout << "Integer value: " << num << endl;
    cout << "Float value: " << fnum << endl;

    // Task 2: Implicit Type Conversion
    int num2 = 25;
    float fnum2;

    fnum2 = num2;

    cout << "\nTask 2: Implicit Type Conversion" << endl;
    cout << "Integer value: " << num2 << endl;
    cout << "Converted value: " << fnum2 << endl;
    cout << "Data type: " << typeid(fnum2).name() << endl;

    return 0;
}