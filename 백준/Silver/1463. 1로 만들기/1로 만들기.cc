#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int dp[1000001] = {0,};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 연산을 진행할 정수 n
	int n;
	cin >> n;
	dp[2] = 1;
	dp[3] = 1;

	for (int i = 4; i <= n; ++i) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	cout << dp[n] << "\n";
	return 0;
}