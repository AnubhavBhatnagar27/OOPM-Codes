// Write a program to perform string manipulations such as concatenation, comparison, and reversing using C++ string functions.
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    string concatenated = str1 + " " + str2;
    cout << "\nConcatenated string: " << concatenated << endl;
    if (str1 == str2) {
        cout << "\nBoth strings are equal." << endl;
    } else {
        cout << "\nBoth strings are not equal." << endl;
    }
    if (str1 < str2) {
        cout << "\nThe first string is lexicographically smaller than the second string." << endl;
    } else if (str1 > str2) {
        cout << "\nThe first string is lexicographically greater than the second string." << endl;
    }
    string reversed = str1;
    reverse(reversed.begin(), reversed.end());
    cout << "\nReversed first string: " << reversed << endl;
    return 0;
}
