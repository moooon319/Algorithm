#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int cnt, n;
	int input = 1;
	stack<int> st;
	vector<char> v;

	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> n;

		while(input <= n) {
			st.push(input);
			input++;
			v.push_back('+');
		}

		if (st.top() == n) {
			st.pop();
			v.push_back('-');
		}

		else if (st.top() > n) {
			cout << "NO";
			return 0;
		}
	}

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
	return 0;

}