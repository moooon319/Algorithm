#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <long> card;

bool binarysearch(int start, int end, long num) {
	while (start <= end) {
		int mid = (start + end) / 2;

		if (card[mid] == num)
			return 1;
		else if (card[mid] < num)
			start = mid + 1;
		else
			end = mid - 1;
	}
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	long key_1 = 0, key_2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> key_1;
		card.push_back(key_1);
	}
	sort(card.begin(), card.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> key_2;
		cout << binarysearch(0, n - 1, key_2) << " ";
	}
	return 0;
}

