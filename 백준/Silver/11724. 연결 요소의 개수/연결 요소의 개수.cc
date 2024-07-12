#include <bits/stdc++.h>
using namespace std;

int N, M;
int u, v;
int cnt = 0;
bool visited[1001];
int arr[1001][1001];

void DFS(int i) {

	visited[i] = true;

	for (int j = 1; j <= N; j++) {
		if (arr[i][j] == 1 && visited[j] == false) {
			DFS(j);
		}
	}

}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= M; i++) {
		cin >> u >> v;
		arr[u][v] = 1;
		arr[v][u] = 1;
	}

	for (int i = 1; i <= N; i++) {
		if (visited[i] == false) {
			DFS(i);
			cnt++;
		}
	}

	cout << cnt;
}



