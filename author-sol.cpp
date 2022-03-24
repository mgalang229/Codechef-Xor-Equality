#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5;
const int MOD = 1e9 + 7;
long long dp[MAX+1];

void precompute() { // precompute the powers of 2
	dp[0] = 1;
	for(int i = 1; i <= MAX; i++) {
		dp[i] = dp[i-1] * 2 % MOD;
	}
}

void perform_test() {
	int n;
	cin >> n;
	// the only numbers that satisfy the condition given are even numbers
	// and there are (2 ^ N - 1) even numbers within the range [0, 2 ^ N]
	cout << dp[n-1] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	precompute();
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
