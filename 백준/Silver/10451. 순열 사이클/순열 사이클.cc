#include<iostream>
#include<vector>

using namespace std;

bool visited[1002];
vector<int> graph[1002];
int n, test;


void cycle(int x) {
	visited[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int new_x = graph[x][i];
		if (!visited[new_x]) {
			cycle(new_x);
		}


	}
}

	int main() {

		cin >> test;
		while(test--) {
			int cnt = 0;
			cin >> n;
			for (int i = 1; i <= n; i++) {
				graph[i].clear();
				visited[i] = false;
			}
			for (int j = 1; j <= n; j++) {
				int num;
				cin >> num;
				graph[j].push_back(num);
			}


			for (int j = 1; j <= n; j++) {
				if (!visited[j]) {
					cycle(j);
					cnt++;
				}
			}
			cout << cnt << "\n";
		}
		return 0;
	}