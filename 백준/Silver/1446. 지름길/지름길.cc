#include <bits/stdc++.h>
using namespace std;

const int INF = 10001;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, D;
	int start, end, dist;

	

	cin >> N >> D;

	vector<vector<pair<int, int>>> v(D + 1);
	vector<int> dp(D + 1, INF);
	
	for (int i = 0; i < N; i++) {
		cin >> start >> end >> dist;
		if (end <= D) {
			v[start].push_back({ end,dist });
		}

	}

	dp[0] = 0;
	for (int i = 0; i <= D; i++) {
		if (i != 0) {
			dp[i] = min(dp[i], dp[i - 1] + 1);
		}


		for (int j = 0; j < v[i].size(); j++) {
			end = v[i][j].first;
			dist = v[i][j].second;

			if (dp[i] + dist < dp[end]) {
				dp[end] = dp[i] + dist;
			}
		}
	}

	cout << dp[D];

}