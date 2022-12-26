#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // FILE I/O
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    #endif

	int n;
	cin >> n;

	int arr[n];
	int result = 0;

	for (auto &x: arr) cin >> x;

	for (int i = 0; i < n; i++) {
		if (arr[i] > arr[i+1] && i == 0) result++;
		else if (arr[i] > arr[i+1] && arr[i] > arr[i-1]) result++;
		else if (arr[i-1] < arr[i] && i == n-1) result++;
	}
	
	cout << result * 2 << '\n';
}

/*
input:
10
1 -2 -2 2 3 4 3 7 1 10

output:
8
*/
