#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	vector<string>d, dv;
	int n, m;
	string name;
	cin >> n >> m;

	for (int i = 0; i < n; i++) { //듣도 못한 사람
		cin >> name;
		d.push_back(name);
	}

	sort(d.begin(), d.end()); //이름 오름차순 정렬

	for (int i = 0; i < m; i++) {
		cin >> name;
		if (binary_search(d.begin(), d.end(), name)) { //듣보찾기
			dv.push_back(name);
		}
	}
	sort(dv.begin(), dv.end()); // 듣보 오름차순 정렬
	cout << dv.size() << '\n';
	for (string j : dv) {
		cout << j << '\n';
	}
}

	