#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    if (N % 7 == 0) cout << N << "\n";
    else {
        N -= N % 10;
        while (N % 7 != 0) N++;
        cout << N << "\n";
    }
}
