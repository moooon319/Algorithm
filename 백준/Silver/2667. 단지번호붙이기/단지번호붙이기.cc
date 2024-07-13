#include <bits/stdc++.h>
using namespace std;


int N;
int arr[25][25];
bool visited[25][25];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };
vector<int> v;



void BFS(int start_x, int start_y) {
	queue<pair<int, int>> q;
	visited[start_x][start_y] = true;
	q.push({ start_x,start_y });
	int cnt = 1;
	

	while (!q.empty()) {

		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x >= 0 && new_y >= 0 && new_x <N && new_y < N
				&& visited[new_x][new_y] == false && arr[new_x][new_y] == 1) {

				visited[new_x][new_y] = true;
				q.push({ new_x, new_y });
				cnt++;
			}
		}
		
	}
	v.push_back(cnt);
	
	

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> s;
		for (int j = 0; j < N; j++) {
			arr[i][j] = s[j] - '0';

		}

	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visited[i][j] == false && arr[i][j] == 1) {
				BFS(i, j);
			}
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}

}
