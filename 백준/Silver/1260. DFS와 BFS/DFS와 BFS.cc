#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int n, m, v;
int arr[1001][1001];
bool visited[1001];
queue<int> q;

void DFS(int v)
{
	visited[v] = true;
	cout << v << ' ';

	for (int i = 1; i <= n; i++) {
		if (arr[v][i] == 1 && visited[i] == 0) { // v랑 연결되어 있고 방문x
			DFS(i);
		}
	}
}

void BFS(int v)
{
	q.push(v);
	visited[v] = true;
	cout << v << ' ';

	while (!q.empty()) {
		v = q.front();
		q.pop();

		for (int x = 1; x <= n; x++) {
			if (arr[v][x] == 1 && visited[x] == 0)
			{
				q.push(x);
				visited[x] = true;
				cout << x << ' ';
			}
		}
	}
}

int main()
{
	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1; //양방향
	}
	DFS(v);
	cout << '\n';

	memset(visited, 0, sizeof(visited)); // 방문기록 초기화

	BFS(v);

}


	