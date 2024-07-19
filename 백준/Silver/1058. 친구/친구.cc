#include <bits/stdc++.h>
using namespace std;



int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int arr[50][50];
	int n, result = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {

		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {

			if (s[j] == 'Y') {
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = 9999;
			}

			if (i == j) {
				arr[i][j] = 0;
			}

		}

	}

	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] > arr[i][k] + arr[k][j]) {

					arr[i][j] = arr[i][k] + arr[k][j];

				}

			}
		}
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (arr[i][j] ==1 || arr[i][j]==2) {
				cnt++;
			}
		}

		result = max(result, cnt);
	}


	cout << result;

}