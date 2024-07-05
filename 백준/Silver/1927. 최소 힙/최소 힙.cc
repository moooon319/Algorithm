#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	priority_queue <int, vector<int>, greater<int>> pq;
	int n,num;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num == 0) {
			if (pq.empty() == 1) {
				cout << '0' << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else {
			pq.push(num);
		}
	}

	

	return 0;

}