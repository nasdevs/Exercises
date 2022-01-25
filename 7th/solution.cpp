/*
@name : exercise 7th
@url github : https://github.com/nasdevs
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;

    string result = (N.find('0') == string::npos ? "NO" : "YES"); // string::npos: It is a constant static member value with the highest possible value for an element of type size_t. It actually means until the end of the string. It is used as the value for a length parameter in the string's member functions. As a return value, it is usually used to indicate no matches
    cout << result << "\n";
}
