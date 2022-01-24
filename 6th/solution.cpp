#include <bits/stdc++.h>
using namespace std;

bool check_prima(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    if (n != 1) return true;
}

int main() {
    int size = 5;
    int numbers[size] = {};
    bool results[size] = {};

    for (int i = 0; i < size; i++) {
        cout << i+1 << ". Input number : "; cin >> numbers[i];
        results[i] = check_prima(numbers[i]);
    }

    for (int j = 0; j < size; j++) {
        if (results[j] == true) cout << "The number " << numbers[j] << " is prime" << endl;
        else cout << "The number " << numbers[j] << " is not prime" << endl;
    }
}
