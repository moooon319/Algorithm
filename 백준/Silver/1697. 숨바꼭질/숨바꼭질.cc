
#include <bits/stdc++.h>
using namespace std;

int N, K;
bool visited[100001];



void BFS(int x) {

	queue<pair<int, int>> q;
	int cnt = 0;
	q.push({ x, cnt });


	while (!q.empty()) {

		x = q.front().first;
		cnt = q.front().second;
		q.pop();

		if (x == K) {

			cout << cnt;
			break;
		}

		if (x + 1 >= 0 && x + 1 < 100001) {
			if (!visited[x + 1]) {
				visited[x + 1] = true;
				q.push({ x + 1, cnt+1 });
			}
		}

		if (x - 1 >= 0 && x - 1 < 100001) {
			if (!visited[x - 1]) {
				visited[x - 1] = true;
				q.push({ x - 1, cnt+1 });


			}

		}

		if (2 * x >= 0 && 2 * x < 100001) {
			if (!visited[2 * x]) {
				visited[2 * x] = true;
				q.push({ 2 * x, cnt+1 });
			}
		}
	}
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); 
	cout.tie(0);

	cin >> N >> K;

	visited[N] = true;
	BFS(N);
}