#include <bits/stdc++.h>
using namespace std;

vector<int> v1;

int binarysearch(int left, int right, int target) {

	while (left <= right) {
		int mid = (left + right) / 2;
		if (target == v1[mid]) {
			return 1;
		}
		else if (target < v1[mid]) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	
	return 0;
}



int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m,num,num2;


	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v1.push_back(num);
	}

	sort(v1.begin(), v1.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num2;
		cout << binarysearch(0, n - 1, num2) << ' ';
	}
	
}