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
            for (int k = i, l = 0; k <= j; k++, l++) {
                int output = (k > limit) ? l : k;
                cout << output << " ";
            }
            cout << endl;
        }
    }
}
