#include <bits/stdc++.h>
using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int result=0;
	int n = 1;
	stack<char> st;
	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			n *= 2;
			st.push('(');
		}

		else if (s[i] == '[') {
			n *= 3;
			st.push('[');
		}

		else if (s[i] == ')') {
			if (s[i - 1] == '(') {
				result += n;
			}

			if (st.empty() || st.top() != '(') {
				result = 0;
				break;
			}

			st.pop();
			n /= 2;
		}

		else {
			if (s[i - 1] == '[') {
				result += n;
			}
			if (st.empty() || st.top() != '[') {
				result = 0;
				break;
			}

			st.pop();
			n /= 3;
		}

	}

	if (!st.empty()) {
		result = 0;
	}
	
		cout << result;
	

	return 0;

}