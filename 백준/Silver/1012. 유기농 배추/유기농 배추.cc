
#include <bits/stdc++.h>
using namespace std;


int T, M, N, K;
int cnt;
int arr[50][50];
int x, y;
bool visited[50][50];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };


void BFS(int start_x, int start_y) {

	queue<pair<int, int>> q;
	visited[start_x][start_y] = true;
	q.push({ start_x, start_y });
	

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x >= 0 && new_y >= 0 && new_x < M && new_y < N
				&& !visited[new_x][new_y] && arr[new_x][new_y] == 1) {

				visited[new_x][new_y] = true;
				q.push({new_x, new_y});
				

			}
		}
	}
}

int main() {
	cin >> T;
	

	for (int i = 0; i < T; i++){

		cin >> M >> N >> K;

		memset(arr, 0, sizeof(arr));
		memset(visited, 0, sizeof(visited));
		cnt = 0;

		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int x = 0; x < M; x++) {
			for (int y = 0; y < N; y++) {

				if (!visited[x][y] && arr[x][y] == 1) {
					BFS(x, y);
					cnt++;
				}
				
			}
		}

		cout << cnt << '\n';

	}

}