#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int X = 0;
    for (int i = 0; i < N; i++) {
        if (X && X%K == 0) X*=2; // (X && X%K == 0) equivalent to (X != 0 && X%K == 0)
        else X++;
    }
    cout << X << "\n";
}
