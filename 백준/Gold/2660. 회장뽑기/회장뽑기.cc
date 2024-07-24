#include <bits/stdc++.h>
using namespace std;

#define INF 9999


int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, x, y, arr[51][51];
	int cnt = 0;
	int result = INF;

	vector<int> v;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) {
				arr[i][j] = 0;
			}
			else {
				arr[i][j] = INF;
			}
		}
	}


	while (true) {
		cin >> x >> y;

		if (x == -1) {
			break;
		}
		arr[x][y] = 1;
		arr[y][x] = 1;
	}



	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {
					arr[i][j] = arr[i][k] + arr[k][j];
				}


			}
		}

	}

	for (int i = 1; i <= n; i++) {

		int max = 0;

		for (int j = 1; j <= n; j++) {
			if (arr[i][j] != 0 && max < arr[i][j]) {
				max = arr[i][j];
			}
		}

		if (result > max) {
			result = max;
			cnt = 1;
			v.clear();
			v.push_back(i);
		}

		else if (result == max) {
			cnt++;
			v.push_back(i);

		}
	}

	cout << result << ' ' << cnt << '\n';
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << ' ';
	}

}