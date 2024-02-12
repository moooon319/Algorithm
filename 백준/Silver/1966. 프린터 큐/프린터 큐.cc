#include <iostream>
#include <queue>

using namespace std;

int main()
{
	
	int test, n, m, imp;
	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> n >> m;
		int cnt = 0;
		queue<pair<int, int>> qu;
		priority_queue<int> pq;

		for (int j = 0; j < n; j++) {
			cin >> imp;
			qu.push({ j,imp });
			pq.push(imp);
		}
		while (!qu.empty()) {
			int index = qu.front().first;
			int priority = qu.front().second;
			qu.pop();

			if (pq.top() == priority) {
				pq.pop();
				cnt++;

				if (index == m) {
					cout << cnt << '\n';
					break;
				}
			}
			else qu.push({ index,priority });
		}

	}
}


	