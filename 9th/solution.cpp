#include <bits/stdc++.h>
using namespace std;

// solution 1
// int prima(int n) {
//     for (int i = 2; i < n; i++) if ((n % i) == 0 ) return 0;
//     if (n > 1) return n;
//     else return 0;
// }

int main() {
    int N;
    cin >> N;

    // solution 1 (slow)
    // if (N == prima(N) && N < 7) cout << "YES\n";
    // else cout << "NO\n";

    // solution 2 (fast)
    cout << (N == 2 || N == 3 || N == 5 ? "YES" : "NO") << "\n";
}
