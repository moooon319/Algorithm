#include <bits/stdc++.h>
using namespace std;


int N, M;

int dx[4] = {1,-1,0,0};
int dy[4] = { 0,0,-1,1 };
bool visited[100][100];
int arr[100][100];
int cnt[100][100];
int new_x, new_y;


void BFS(int start_x, int start_y) {
	queue<pair<int, int>> q;
	visited[start_x][start_y] = true;
	q.push({ start_x, start_y });
	cnt[start_x][start_y] = 1;

	while (!q.empty()) {

		
		int x = q.front().first;
		int y = q.front().second;
		q.pop();


		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x >= 0 && new_x < N && new_y >= 0 && new_y < M
				&& visited[new_x][new_y] == false && arr[new_x][new_y] == 1) {
				visited[new_x][new_y] = true;
				q.push({ new_x, new_y });
				cnt[new_x][new_y] = cnt[x][y]+1;
			}
		}


	}
	cout << cnt[N-1][M-1];
	
	

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < M; j++) {
			arr[i][j] = s[j] - '0';
		}
	}
	BFS(0,0);

	

}
