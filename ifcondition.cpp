//
// Created by Abdallah Mahmoud on 10/27/25.
//

#include <iostream>
using namespace std;

int main() {
    //if condition:
    /*
     * check a given condition whether is true or false
     * if True is execute if body otherwise blank or else part
     */

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout <<"You are eligible"<<endl;
    }else {
        cout <<"You are not eligible"<<endl;
    }

    // expression can be anything : guess out put
    if (3 > 5 || 2 < 7) {
        cout <<"A" << endl  ;
    }

    if ( 5 < 7 && 3 >2) {
        cout <<"B" <<endl;
    }

    if (3) {
        cout <<"C" <<endl;
    }

    if ( 5 !=5){cout <<"D" <<endl;}

    return 0;
}