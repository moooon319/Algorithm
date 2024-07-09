#include <bits/stdc++.h>
using namespace std;

void DFS(int);
void BFS(int);

int n, m, v;
int a, b;
int arr[1001][1001];
bool visited[1001];
queue<int> q;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> n >> m >> v;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	DFS(v);
	cout << '\n';
	//memset(visited, false, sizeof(visited));
	fill (visited, visited + 1001, false);
	BFS(v);
		

	return 0;

}
void DFS(int v) {

	visited[v] = true;
	cout << v << ' ';

	for(int i=1; i<=n; i++){
		if (arr[v][i] == 1 &&visited[i]==false)
			DFS(i);
	}

}

void BFS(int v) {
	q.push(v);
	visited[v] = true;
	cout << v << ' ';

	while (!q.empty()) {

		v = q.front();
		q.pop();

		for (int i = 1; i <= n; i++) {
			if (arr[v][i] == 1 && visited[i] == false) {
				q.push(i);
				visited[i] = true;
				cout << i << ' ';
			}
		}

	}



}