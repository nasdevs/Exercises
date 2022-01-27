#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X = 0;
    cin >> N;
    for (int i = 2; i <= N; i++) if (N % i == 0) X+=1;
    if (X == 5) cout << "YES\n";
    else cout << "NO\n";
}
