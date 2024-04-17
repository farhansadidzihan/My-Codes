# include <bits/stdc++.h>
# include <iostream>
# include <string>
# include <iomanip>
using namespace std;

int global = 3;

int main() {
    // || For Competitive Programming File opening for input and output ||
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // || Typecsting ||
    int num = 245, global = 24;
    cout << (float)num / 34 << endl;
    cout << float(num) / 34 << endl;

    // || String Sclicing ||
    string name = "Zihan";
    cout << name.length() << " ";
    cout << name.substr(1, 5) << endl; // Len of String 

    cout << :: global << endl; // Scope Resolution Operator For Using Global Value

    // || Constant ||
    float const pi = 3.1416;
    // pi = 32434; // Throw an error = , because pi is constant
    cout << pi << endl;

    // || Manupulation Using <iomanip> ||
    int a = 432, b = 53, c = 8;
    cout << "The name is:- " << setw(3) << a << endl;
    cout << "The name is:- " << setw(3) << b << endl;
    cout << "The name is:- " << setw(3) << c << endl;

    // || Macro ||
    # define pi 3.1416  // Defining Macro
    int r = 5;
    double area = pi * r * r;
    cout << "Pi r squared value is:- " << area << endl;

    // || Max range and min range of integer ||
    int maxi = INT_MAX, mini = INT_MIN;
    cout << "Max is:- " << maxi << " " << "Min is:- " << mini << endl;

    // || Some Miscellianeous Operators ||
    int n = 100;
    cout << sizeof(n) << endl; 
    int x = 10;
    int y = 5;
    int max = (x > y) ? x : y;  // Ternary / Conditional Operator
    cout << max << endl;

    return 0;
}