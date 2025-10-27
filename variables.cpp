//
// Created by Abdallah Mahmoud on 10/27/25.
//
#include  <iostream>
using namespace std;

int main() {
    // Single line comment
    //Variables:
    /*
     *It is a named memory location to used to
     *store or keep for future reference
     */
    //Syntax: Data Type variableName = value;
    //
    //Two ways:
    // 1. Variable declaration
    int x;
    x = 5; // value initialization
    cout << "x = "<< x << endl;

    //2. Variable initialization
    int y = 10;
    cout << "y = " << y << endl;

    //Basic data types
    int i = 2;
    float f = 2.5f;
    double d = 5.5;
    char c ='A';
    string s = "Hello";
    bool b = true; // 1 where false is 0

    // print all values
    cout <<"i = " << i << endl;
    cout <<"f = " << f << endl;
    cout <<"d = " << d << endl;
    cout <<"c = " << c << endl;
    cout <<"s = " << s << endl;
    cout <<"b = " << b << endl;


    return 0;// 0-> meeans success
}