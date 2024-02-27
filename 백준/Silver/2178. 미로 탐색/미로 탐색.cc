#include<iostream>
#include<queue>

using namespace std;

int n, m;
int maze[101][101];
int visited[101][101];
int dist[101][101];
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = {0, 0, 1, -1};


void  bfs(int x, int y) {

	queue<pair<int, int>> q;
	visited[x][y] = 1;
	q.push(make_pair(x, y));
	dist[x][y]++;

	while (!q.empty()) {
		int new_x = q.front().first;
		int new_y = q.front().second;
		q.pop();


		for (int i = 0; i < 4; i++) {
			int next_x = new_x + dx[i];
			int next_y = new_y + dy[i];

			/* if (next_x < 0 || next_x >= n || next_y < 0 || next_y >= m)
				continue;

			if (visited[next_x][next_y] != 0)
				continue;
			if (maze[next_x][next_y] = 0)
				continue; */

			if ((0 <= next_x && next_x < n) && (0 <= next_y && next_y < m)
				&& !visited[next_x][next_y] && maze[next_x][next_y] == 1){

				visited[next_x][next_y] = 1;
			q.push(make_pair(next_x, next_y));
			dist[next_x][next_y] = dist[new_x][new_y] + 1;
		}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string row;
		cin >> row;


		for (int j = 0; j < m; j++) {
			maze[i][j] = row[j] - '0';
		}
	}
	bfs(0, 0);
	cout << dist[n - 1][m - 1];

}
