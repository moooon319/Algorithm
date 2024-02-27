#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<int> v[1001];
bool visited[1001];
int n, m,cnt;

void bfs(int index)
{
	queue<int> q;
	q.push(index);
	visited[index] = 1;

	while (!q.empty()) {
		index = q.front();
		q.pop();


		for (int i = 0; i < v[index].size(); i++)
		{
			if (visited[v[index][i]] == 0) {
				q.push(v[index][i]);
				visited[v[index][i]] = 1;
			}
		}
	}

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		if(visited[i] == 0) {
			cnt++;

			bfs(i);
		}
	}
	cout << cnt << '\n';
}