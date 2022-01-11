/*
@name : execise 4th
@author : Nasrullah
@url github : https://github.com/nasdevs
*/

#include <iostream> 
using namespace std;

int main() {
    int limit;

    cout << "Input limit : "; cin >> limit;

    for (int i = 1; i <= limit; i++) {
        for (int j = i; j < limit+i; j++) {
            for (int k = i; k <= j; k++) {
                int output = (k > limit) ? k-limit : k;
                cout << output << " ";
            }
            cout << endl;
        }
    }
}
