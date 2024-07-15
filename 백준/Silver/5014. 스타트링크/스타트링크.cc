
#include <bits/stdc++.h>
using namespace std;

int F, S, G, U, D;
int dy[2];
int cnt[1000001];
bool visited[1000001];

void BFS(int start_x) {
	queue<int> q;
	visited[start_x] = true;
	q.push(start_x);

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 0; i < 2; i++) {
			int new_x = x + dy[i];
			if (new_x <= F && new_x >= 1 && visited[new_x] == false) {
				visited[new_x] = true;
				q.push(new_x);
				cnt[new_x] = cnt[x] + 1;

			}
		}

	}

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> F >> S >> G >> U >> D;

	dy[0] = U;
	dy[1] = -D;

	BFS(S);

	if (visited[G]) {
		cout << cnt[G];
	}

	else {
		cout << "use the stairs";
	}

	
}